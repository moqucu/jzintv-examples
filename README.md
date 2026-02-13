# jzIntv Examples

Example Intellivision programs, a shared ASM library, and macros for use with the [jzIntv](https://github.com/moqucu/jzintv) emulator and SDK.

## Repository Structure

```
examples/      Example/demo projects
config/        Keyboard mapping and configuration files (.kbd)
library/       Shared assembly routines (print, math, memcpy, etc.)
macro/         Shared macro files (utilities, STIC, PSG, etc.)
tools/         Helper utilities and legacy conversion tools
```

## Examples

| Project | Description |
|---------|-------------|
| hello | Hello World |
| world | Spinning world demo (bankswitching) |
| mazedemo | Maze demo |
| bncpix | Bouncing pixels |
| life | Conway's Game of Life (colored squares) |
| gram\_scroll | GRAM-based scrolling (8px spacing) |
| handdemo | Hand controller input using RUNQ/SCANHAND |
| 4-tris | Tetris-style game |
| spacepat | Space Patrol — full game |
| intellicart | Intellicart bankswitching examples |
| sdk\_examples| Examples for AS1600 directives and features |
| (many others) | See the `examples/` directory for the full list |

## Documentation

For tutorials and detailed hardware references, visit the **[Intellivision Development Wiki](https://github.com/moqucu/jzintv-examples/wiki)**.

Key documentation pages:
- **[Introduction to CP-1600 Programming](https://github.com/moqucu/jzintv-examples/wiki/Introduction-to-CP-1600-Programming)**
- **[AS1600 Assembler Reference](https://github.com/moqucu/jzintv-examples/wiki/AS1600-Assembler-Reference)**
- **[Master Component Hardware](https://github.com/moqucu/jzintv-examples/wiki/Master-Component-Hardware)**

## Building

Each example can be built with the [AS1600](https://github.com/moqucu/jzintv) assembler:

```sh
as1600 -o program.rom -l program.lst program.asm
```

## Library & Macros

The `library/` and `macro/` directories contain reusable routines and definitions to simplify Intellivision development. See the [Wiki](https://github.com/moqucu/jzintv-examples/wiki) for a full list of available modules.

## License

Copyright (c) 1998-2020, Joseph Zbiciak

Licensed under the [GNU General Public License v2](LICENSE).
