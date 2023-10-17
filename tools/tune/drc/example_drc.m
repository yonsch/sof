function example_drc()

addpath ../common

% The parameters of the DRC compressor
% enabled: 1 to enable the compressor, 0 to disable it
params.enabled = 0;
% threshold: The value above which the compression starts, in dB
params.threshold = -24;
% knee: The value above which the knee region starts, in dB
params.knee = 30;
% ratio: The input/output dB ratio after the knee region
params.ratio = 12;
% attack: The time to reduce the gain by 10dB, in seconds
params.attack = 0.003;
% release: The time to increase the gain by 10dB, in seconds
params.release = 0.25;
% pre_delay: The lookahead time for the compressor, in seconds
params.pre_delay = 0.006;
% release_zone[4]: The adaptive release curve parameters
params.release_zone = [0.09 0.16 0.42 0.98];
% release_spacing: The value of spacing per frame while releasing, in dB
params.release_spacing = 5;
% post_gain: The static boost value in output, in dB
params.post_gain = 0;

% Export
drc_coefs_and_config_export(params, 'passthrough');

% Export enabled
params.enabled = 1;
drc_coefs_and_config_export(params, 'enabled');

rmpath ../common

end

function drc_coefs_and_config_export(params, id)

% Set the parameters here
tplg1_fn = sprintf("../../topology/topology1/m4/drc_coef_%s.m4", id); % Control Bytes File
tplg2_fn = sprintf("../../topology/topology2/include/components/drc/%s.conf", id); % Control Bytes File
% Use those files with sof-ctl to update the component's configuration
blob3_fn = sprintf("../../ctl/ipc3/drc_coef_%s.blob", id); % Blob binary file
alsa3_fn = sprintf("../../ctl/ipc3/drc_coef_%s.txt", id); % ALSA CSV format file
blob4_fn = sprintf("../../ctl/ipc4/drc/%s.blob", id); % Blob binary file
alsa4_fn = sprintf("../../ctl/ipc4/drc/%s.txt", id); % ALSA CSV format file

endian = "little";
sample_rate = 48000;

% Generate coefficients for DRC with the given parameters
coefs = drc_gen_coefs(params, sample_rate);

% Convert coefficients to sof_drc_config struct
config = drc_generate_config(coefs);

% Convert struct to binary blob
blob8 = drc_build_blob(config, endian);
blob8_ipc4 = drc_build_blob(config, endian, 4);

% Generate output files
tplg_write(tplg1_fn, blob8, "DRC");
tplg2_write(tplg2_fn, blob8_ipc4, "drc_config", 'Exported Control Bytes');
blob_write(blob3_fn, blob8);
alsactl_write(alsa3_fn, blob8);
blob_write(blob4_fn, blob8_ipc4);
alsactl_write(alsa4_fn, blob8_ipc4);

% Plot x-y response in dB
drc_plot_db_curve(coefs);

end
