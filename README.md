![image](https://github.com/user-attachments/assets/8f0d8143-ba97-4ec2-9e9e-d6fa73bf0607)
# Command & Conquer Generals (inc. Zero Hour) Source Code

This repository includes source code for Command & Conquer Generals, and its expansion pack Zero Hour. This release provides support to the Steam Workshop for both games ([C&C Generals](https://steamcommunity.com/workshop/browse/?appid=2229870) and [C&C Generals - Zero Hour](https://steamcommunity.com/workshop/browse/?appid=2732960)).

This is a clean up of @Omniblade commit: https://github.com/electronicarts/CnC_Generals_Zero_Hour/commit/3b1a5d970f7c107b2173528458c037d309d49391 utilsing help from the AWESOME Thyme community @xezon @tomsons26 @disarray @hanfield @v @Irwon

**Note: Only Zero Hour compiles**

## Dependencies

If you wish to rebuild the source code and tools successfully you will need to find or write new replacements (or remove the code using them entirely) for the following libraries;

- DirectX SDK (Version 8.0 or higher) (expected path `\Dependencies\`)

No Longer Required

~~- STLport (4.5.3) - (expected path `\Code\Libraries\STLport-4.5.3`)~~

~~- 3DSMax 4 SDK - (expected path `\Code\Libraries\Max4SDK\`)~~

~~- NVASM - (expected path `\Code\Tools\NVASM\`)~~

~~- BYTEmark - (expected path `\Code\Libraries\Source\Benchmark`)~~

~~- RAD Miles Sound System SDK - (expected path `\Code\Libraries\Source\WWVegas\Miles6\`)~~

~~- RAD Bink SDK - (expected path `\Code\GameEngineDevice\Include\VideoDevice\Bink`)~~

~~- SafeDisk API - (expected path `\Code\GameEngine\Include\Common\SafeDisk` and `\Code\Tools\Launcher\SafeDisk\`)~~

~~- Miles Sound System "Asimp3" - (expected path `\Code\Libraries\WPAudio\Asimp3`)~~

~~- GameSpy SDK - (expected path `\Code\Libraries\Source\GameSpy\`)~~

~~- ZLib (1.1.4) - (expected path `\Code\Libraries\Source\Compression\ZLib\`)~~

~~- LZH-Light (1.0) - (expected path `\Code\Libraries\Source\Compression\LZHCompress\CompLibSource` and `CompLibHeader`)~~

## Compiling (Win32 Only)

To use the compiled binaries, you must own the game. The C&C Ultimate Collection is available for purchase on [EA App](https://www.ea.com/en-gb/games/command-and-conquer/command-and-conquer-the-ultimate-collection/buy/pc) or [Steam](https://store.steampowered.com/bundle/39394/Command__Conquer_The_Ultimate_Collection/).

### Installation Instructions

1. Install VS6 SP6
2. Install CMake
3. Copy DX8SDK into Dependencies folder
4. Copy dbghelp.lib into DX8SDK
5. Clone code in this repo
6. cmake --preset vc6
7. cd build\vc6
8. nmake

When the workspace has finished building, the compiled binary will be called zerohour.exe

## License

This repository and its contents are licensed under the GPL v3 license, with additional terms applied. Please see [LICENSE.md](LICENSE.md) for details.
