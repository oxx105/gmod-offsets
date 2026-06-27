// Garry's Mod Auto-Generated Offsets
// Process: gmod.exe
// Architecture: x64

#pragma once

#ifdef _WIN64
    #define GMOD_64BIT
#else
    #define GMOD_32BIT
#endif

namespace GModOffsets
{
    // Global offsets
    constexpr uintptr_t EntityList = 0x7fff7a9f0a60;
    constexpr uintptr_t LocalPlayer = 0x7fff7aac79d8;
    constexpr uintptr_t ViewMatrix = 0x7fff7a992164;

    // Source Engine entity offsets
    namespace Entity
    {
        constexpr uintptr_t Health = 0x100;
        constexpr uintptr_t Team = 0x104;
        constexpr uintptr_t Position = 0x138;
        constexpr uintptr_t Dormant = 0xED;
        constexpr uintptr_t BoneMatrix = 0x26A8;
    }
}
