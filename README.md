# Command & Conquer Generals (inc. Zero Hour) Source Code - Only Zero Hour compiles

This repository includes source code for Command & Conquer Generals, and its expansion pack Zero Hour. This release provides support to the Steam Workshop for both games ([C&C Generals](https://steamcommunity.com/workshop/browse/?appid=2229870) and [C&C Generals - Zero Hour](https://steamcommunity.com/workshop/browse/?appid=2732960)).

This is a clean up of @Omniblade [commit](https://github.com/electronicarts/CnC_Generals_Zero_Hour/commit/3b1a5d970f7c107b2173528458c037d309d49391) utilsing help from the AWESOME Thyme community @xezon @tomsons26 @disarray @hanfield @v @Irwon @TheAuthir

## Dependencies

If you wish to rebuild the source code and tools successfully you will need to find or write new replacements (or remove the code using them entirely) for the following libraries;

- DirectX SDK (Version 8.0 or higher) (expected path `\Dependencies\DX8SDK`)

## Compiling (Win32 Only)

To use the compiled binaries, you must own the game. The C&C Ultimate Collection is available for purchase on [EA App](https://www.ea.com/en-gb/games/command-and-conquer/command-and-conquer-the-ultimate-collection/buy/pc) or [Steam](https://store.steampowered.com/bundle/39394/Command__Conquer_The_Ultimate_Collection/).

## Installation Instructions

1. Install VS6 SP6
2. Install CMake
3. Clone code in this repo
4. Copy DX8SDK into Dependencies folder
5. Copy dbghelp.lib into DX8SDK
7. cmake --preset vc6
8. cd build\vc6
9. nmake

When the workspace has finished building, the compiled binary will be called zerohour.exe

## License

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.

## FAQ
Find other forks here
https://github.com/electronicarts/CnC_Generals_Zero_Hour/forks

## Documentation
[Documentation on source code](https://richardboegli.github.io/)

## Known Issues
1. SoundFX are not working correctly
2. Only Zero Hour compiles


