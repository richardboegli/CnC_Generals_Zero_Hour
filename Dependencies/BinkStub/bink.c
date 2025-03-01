/**
 * @file
 *
 * @author OmniBlade
 *
 * @brief Stub library containing subset of functions from binkw32.dll as used by the SAGE engine.
 *
 * @copyright Thyme is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            3 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#define BINKDLL
#include "bink.h"
#include <stddef.h>

/*
 * All of these function definitions are empty, they are just hear to generate a dummy dll that
 * exports the same symbols as the real binkw32.dll so we can link against it without the commercial
 * SDK.
 */

BINK *__stdcall BinkOpen(const char *name, unsigned int flags)
{
    return NULL;
}

void __stdcall BinkSetSoundTrack(unsigned int total_tracks, unsigned int *tracks)
{
    
}

int __stdcall BinkSetSoundSystem(SndOpenCallback open, unsigned long param)
{
    return 0;
}

void *__stdcall BinkOpenDirectSound(unsigned long param)
{
    return NULL;
}

void __stdcall BinkClose(BINK *handle)
{
    
}

int __stdcall BinkWait(BINK *handle)
{
    return 0;
}

int __stdcall BinkDoFrame(BINK *handle)
{
    return 0;
}

int __stdcall BinkCopyToBuffer(
    BINK *handle, void *dest, int destpitch, unsigned int destheight, unsigned int destx, unsigned int desty, unsigned int flags)
{
    return 0;
}

void __stdcall BinkSetVolume(BINK *handle, unsigned int trackid, int volume)
{
    
}

void __stdcall BinkNextFrame(BINK *handle)
{
    
}

void __stdcall BinkGoto(BINK *handle, unsigned int frame, int flags)
{
    
}
