// SPDX-License-Identifier: BSD-3-Clause
/*
 * Copyright(c) 2023 Intel Corporation. All rights reserved.
 */


#include <module/audio/source_api.h>
#include <module/audio/audio_stream.h>

/* This file contains public source API functions that were too large to mark is as inline. */

int source_get_data(struct sof_source *source, size_t req_size,
		    void const **data_ptr, void const **buffer_start, size_t *buffer_size)
{
	int ret;

	if (source->requested_read_frag_size)
		return -EBUSY;

	ret = source->ops->get_data(source, req_size, data_ptr, buffer_start, buffer_size);

	if (!ret)
		source->requested_read_frag_size = req_size;
	return ret;
}

int source_release_data(struct sof_source *source, size_t free_size)
{
	int ret;

	/* Check if anything was obtained before for reading by source_get_data */
	if (!source->requested_read_frag_size)
		return -ENODATA;

	/* limit size of data to be freed to previously obtained size */
	if (free_size > source->requested_read_frag_size)
		free_size = source->requested_read_frag_size;

	ret = source->ops->release_data(source, free_size);

	if (!ret)
		source->requested_read_frag_size = 0;

	source->num_of_bytes_processed += free_size;
	return ret;
}

size_t source_get_frame_bytes(struct sof_source *source)
{
	return get_frame_bytes(source_get_frm_fmt(source),
				source_get_channels(source));
}

size_t source_get_data_frames_available(struct sof_source *source)
{
	return source_get_data_available(source) /
			source_get_frame_bytes(source);
}
