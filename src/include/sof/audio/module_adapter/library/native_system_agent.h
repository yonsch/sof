/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright(c) 2023 Intel Corporation. All rights reserved.
 *
 * Author: Pawel Dobrowolski <pawelx.dobrowolski@intel.com>
 */

#ifndef __NATIVE_SYSTEM_AGENT_H__
#define __NATIVE_SYSTEM_AGENT_H__

#include <sof/audio/module_adapter/module/module_interface.h>
#include <native_system_service.h>

struct native_system_agent {
	struct native_system_service_api system_service;
	uint32_t log_handle;
	uint32_t core_id;
	uint32_t module_id;
	uint32_t instance_id;
	uint32_t module_size;
};

void *native_system_agent_start(uint32_t *sys_service,
				uint32_t entry_point, uint32_t module_id, uint32_t instance_id,
				uint32_t core_id, uint32_t log_handle, void *mod_cfg);

#endif /* __NATIVE_SYSTEM_AGENT_H__ */
