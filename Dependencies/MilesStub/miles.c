/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Stub library containing subset of functions from mss32.dll as used by the W3D engine.
 *
 * @copyright This is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            3 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#include "mss.h"
#include <stddef.h>

long __stdcall AIL_3D_sample_volume(H3DSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_set_3D_sample_volume(H3DSAMPLE sample, long volume)
{
}

void __stdcall AIL_end_3D_sample(H3DSAMPLE sample)
{
}

void __stdcall AIL_resume_3D_sample(H3DSAMPLE sample)
{
}

void __stdcall AIL_stop_3D_sample(H3DSAMPLE sample)
{
}

void __stdcall AIL_start_3D_sample(H3DSAMPLE sample)
{
}

int __stdcall AIL_3D_sample_loop_count(H3DSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_set_3D_sample_offset(H3DSAMPLE sample, int offset)
{
}

int __stdcall AIL_3D_sample_length(H3DSAMPLE sample)
{
    return 0;
}

int __stdcall AIL_3D_sample_offset(H3DSAMPLE sample)
{
    return 0;
}

int __stdcall AIL_3D_sample_playback_rate(H3DSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_set_3D_sample_playback_rate(H3DSAMPLE sample, int playback_rate)
{
}

int __stdcall AIL_set_3D_sample_file(H3DSAMPLE sample, const void* file_image)
{
    return 0;
}

HPROVIDER __stdcall AIL_set_sample_processor(HSAMPLE sample, SAMPLESTAGE pipeline_stage, HPROVIDER provider)
{
    return 0;
}

void __stdcall AIL_set_filter_sample_preference(HSAMPLE sample, const char* name, const void* val)
{
}

void __stdcall AIL_release_sample_handle(HSAMPLE sample)
{
}

void __stdcall AIL_close_3D_provider(HPROVIDER lib)
{
}

int __stdcall AIL_set_preference(unsigned int number, int value)
{
    return 0;
}

int __stdcall AIL_waveOutOpen(HDIGDRIVER* driver, LPHWAVEOUT* waveout, int id, LPWAVEFORMAT format)
{
    return 0;
}

void __stdcall AIL_waveOutClose(HDIGDRIVER driver)
{
}

void __stdcall AIL_set_3D_sample_loop_count(H3DSAMPLE sample, int count)
{
}

void __stdcall AIL_set_stream_playback_rate(HSTREAM stream, int rate)
{
}

int __stdcall AIL_stream_playback_rate(HSTREAM stream)
{
    return 0;
}

void __stdcall AIL_stream_ms_position(HSTREAM sample, S32* total_milliseconds, S32* current_milliseconds)
{
}

void __stdcall AIL_set_stream_ms_position(HSTREAM stream, int pos)
{
}

int __stdcall AIL_stream_loop_count(HSTREAM stream)
{
    return 0;
}

void __stdcall AIL_set_stream_loop_block(HSTREAM stream, int loop_start, int loop_end)
{
}

void __stdcall AIL_set_stream_loop_count(HSTREAM stream, int count)
{
}

int __stdcall AIL_stream_volume(HSTREAM stream)
{
    return 0;
}

void __stdcall AIL_set_stream_volume(HSTREAM stream, int volume)
{
}

int __stdcall AIL_stream_pan(HSTREAM stream)
{
    return 0;
}

void __stdcall AIL_set_stream_pan(HSTREAM stream, int pan)
{
}

void __stdcall AIL_close_stream(HSTREAM stream)
{
}

void __stdcall AIL_pause_stream(HSTREAM stream, int onoff)
{
}

AIL_stream_callback __stdcall AIL_register_stream_callback(HSTREAM stream, AIL_stream_callback callback)
{
    return NULL;
}

AIL_3dsample_callback __stdcall AIL_register_3D_EOS_callback(H3DSAMPLE sample, AIL_3dsample_callback EOS)
{
    return NULL;
}

AIL_sample_callback __stdcall AIL_register_EOS_callback(HSAMPLE sample, AIL_sample_callback EOS)
{
    return NULL;
}

void __stdcall AIL_start_stream(HSTREAM stream)
{
}

HSTREAM __stdcall AIL_open_stream_by_sample(HDIGDRIVER driver, HSAMPLE sample, const char* file_name, int mem)
{
    return 0;
}

void __stdcall AIL_set_sample_playback_rate(HSAMPLE sample, int playback_rate)
{
}

int __stdcall AIL_sample_playback_rate(HSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_sample_ms_position(HSAMPLE sample, S32* total_ms, S32* current_ms)
{
}

void __stdcall AIL_set_sample_ms_position(HSAMPLE sample, int pos)
{
}

int __stdcall AIL_sample_loop_count(HSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_set_sample_loop_count(HSAMPLE sample, int count)
{
}

int __stdcall AIL_sample_volume(HSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_set_sample_volume(HSAMPLE sample, int volume)
{
}

int __stdcall AIL_sample_pan(HSAMPLE sample)
{
    return 0;
}

void __stdcall AIL_set_sample_pan(HSAMPLE sample, int pan)
{
}

void __stdcall AIL_end_sample(HSAMPLE sample)
{
}

void __stdcall AIL_resume_sample(HSAMPLE sample)
{
}

void __stdcall AIL_stop_sample(HSAMPLE sample)
{
}

void __stdcall AIL_start_sample(HSAMPLE sample)
{
}

void __stdcall AIL_init_sample(HSAMPLE sample)
{
}

int __stdcall AIL_set_named_sample_file(
    HSAMPLE sample, const char* file_name, const void* file_image, int file_size, int block)
{
    return 0;
}

void __stdcall AIL_set_3D_sample_effects_level(H3DSAMPLE sample, float effect_level)
{
}

void __stdcall AIL_set_3D_sample_distances(H3DSAMPLE sample, float max_dist, float min_dist)
{
}

void __stdcall AIL_set_3D_velocity_vector(H3DSAMPLE sample, float x, float y, float z)
{
}

void __stdcall AIL_set_3D_position(H3DPOBJECT obj, float X, float Y, float Z)
{
}

void __stdcall AIL_set_3D_orientation(
    H3DPOBJECT obj, float X_face, float Y_face, float Z_face, float X_up, float Y_up, float Z_up)
{
}

int __stdcall AIL_WAV_info(const void* data, AILSOUNDINFO* info)
{
    return 0;
}

void __stdcall AIL_stop_timer(HTIMER timer)
{
}

void __stdcall AIL_release_timer_handle(HTIMER timer)
{
}

void __stdcall AIL_shutdown(void)
{
}

int __stdcall AIL_enumerate_filters(HPROENUM* next, HPROVIDER* dest, char** name)
{
    return 0;
}

void __stdcall AIL_set_file_callbacks(AIL_file_open_callback opencb, AIL_file_close_callback closecb,
    AIL_file_seek_callback seekcb, AIL_file_read_callback readcb)
{
}

void __stdcall AIL_release_3D_sample_handle(H3DSAMPLE sample)
{
}

H3DSAMPLE __stdcall AIL_allocate_3D_sample_handle(HPROVIDER lib)
{
    return 0;
}

void __stdcall AIL_set_3D_user_data(H3DPOBJECT obj, unsigned int index, int value)
{
}

void __stdcall AIL_unlock(void)
{
}

void __stdcall AIL_lock(void)
{
}

void __stdcall AIL_set_3D_speaker_type(HPROVIDER lib, int speaker_type)
{
}

void __stdcall AIL_close_3D_listener(H3DPOBJECT listener)
{
}

int __stdcall AIL_enumerate_3D_providers(HPROENUM* next, HPROVIDER* dest, char** name)
{
    return 0;
}

M3DRESULT __stdcall AIL_open_3D_provider(HPROVIDER lib)
{
    return 0;
}

char* __stdcall AIL_last_error(void)
{
    return 0;
}

H3DPOBJECT __stdcall AIL_open_3D_listener(HPROVIDER lib)
{
    return 0;
}

int __stdcall AIL_3D_user_data(H3DSAMPLE sample, int index)
{
    return 0;
}

int __stdcall AIL_sample_user_data(HSAMPLE sample, int index)
{
    return 0;
}

HSAMPLE __stdcall AIL_allocate_sample_handle(HDIGDRIVER dig)
{
    return 0;
}

void __stdcall AIL_set_sample_user_data(HSAMPLE sample, unsigned int index, int value)
{
}

int __stdcall AIL_decompress_ADPCM(const AILSOUNDINFO *info, void **outdata, unsigned int *outsize)
{
    return 0;
}

void __stdcall AIL_get_DirectSound_info(HSAMPLE sample, AILLPDIRECTSOUND *lplpDS, AILLPDIRECTSOUNDBUFFER *lplpDSB)
{
}

void __stdcall AIL_mem_free_lock(void *ptr)
{
}

HSTREAM __stdcall AIL_open_stream(HDIGDRIVER dig, const char *filename, int stream_mem)
{
    return NULL;
}

void __stdcall AIL_quick_unload(HAUDIO audio)
{
}

HAUDIO __stdcall AIL_quick_load_and_play(const char *filename, unsigned int loop_count, int wait_request)
{
    return NULL;
}

void __stdcall AIL_quick_set_volume(HAUDIO audio, float volume, float extravol)
{  
}

int __stdcall AIL_quick_startup(
    int use_digital, int use_MIDI, unsigned int output_rate, int output_bits, int output_channels)
{
    return 0;
}

void __stdcall AIL_quick_handles(HDIGDRIVER *pdig, HMDIDRIVER *pmdi, HDLSDEVICE *pdls)
{
}

void __stdcall AIL_sample_volume_pan(HSAMPLE sample, float *volume, float *pan)
{ 
}

void __stdcall AIL_set_3D_sample_occlusion(H3DSAMPLE sample, float occlusion)
{
}

char *__stdcall AIL_set_redist_directory(const char *dir)
{
    return 0;
}

int __stdcall AIL_set_sample_file(HSAMPLE sample, const void *file_image, int block)
{
    return 0;
}

void __stdcall AIL_set_sample_volume_pan(HSAMPLE sample, float volume, float pan)
{
}

void __stdcall AIL_set_stream_volume_pan(HSTREAM stream, float volume, float pan)
{
}

void __stdcall AIL_stream_volume_pan(HSTREAM stream, float *volume, float *pan)
{
}

int __stdcall AIL_startup(void)
{
    return 0;
}

unsigned long __stdcall AIL_get_timer_highest_delay(void)
{
    return 0;
}
