# jzIntv Examples

Example Intellivision programs, a shared ASM library, and macros for use with the [jzIntv](https://github.com/moqucu/jzintv) emulator and SDK.

## Repository Structure

```
examples/      38 example/demo projects
library/       Shared assembly routines (print, math, memcpy, etc.)
macro/         Shared macro files (utilities, STIC, PSG, etc.)
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
| gram\_scroll2 | GRAM-based scrolling (16px spacing) |
| handdemo | Hand controller input using RUNQ/SCANHAND |
| balls1 | MOB movement and interaction |
| balls2 | Balls1 rewritten with task-queue model |
| tagalong | Tag-Along Todd — controller input and AI |
| tagalong2 | Tag-Along Todd 2 — full game |
| tagalong2v | Tag-Along Todd 2 with Intellivoice |
| tagalong2v\_cp1600x | Tag-Along Todd 2v with CP-1600X extensions |
| tank | Tank game with MOBs and status display |
| spacepat | Space Patrol — full game |
| 4-tris | Tetris-style game |
| geese | Geese demo |
| sky | SDK-1600 eye candy |
| lines | Line drawing |
| synth | Synthesizer |
| bankdemo | Intellicart bankswitching demo |
| banktest | Intellicart memory tester with bankswitching |
| bankworld | Spinning world with bankswitching |
| csumexec | EXEC/ROM checksum identifier |
| mob\_test | MOB attribute tester |
| mem\_test | Intellicart memory tester |
| mem\_test\_ra39600 | Memory tester (RA-3-9600) |
| task | Event-driven multitasking routines |
| counttap | Tap counter |
| ecs\_kbd | ECS keyboard scanner |
| ecscable | ECScable monitor |
| cc3serial | CC3 serial interface |
| jlpserial | JLP serial interface |
| kbd\_test | Keyboard tester |
| syn\_test | Synthesis tester |
| fileio | File I/O |
| terminal | ANSI terminal |

## Building

Each example can be built with the [AS1600](https://github.com/moqucu/jzintv) assembler:

```sh
as1600 -o program.rom -l program.lst program.asm
```

## Library

The `library/` directory contains reusable assembly routines:

- **gimini.asm** — Constants and masks for Intellivision programming
- **print.asm** — String display routines
- **fillmem.asm** — FILLMEM, FILLZERO, CLRSCR
- **memcpy.asm** / **memcmp.asm** / **memset.asm** / **memunpk.asm** — Memory operations
- **rand.asm** — Random number generation
- **hex16.asm** / **hexdisp.asm** — Hexadecimal display
- **prnum16.asm** / **prnum32.asm** — Decimal number printing
- **dec16dec32.asm** / **dec16only.asm** — Decrement routines
- **dividivu.asm** / **fastdivu.asm** / **idiv.asm** / **jdiv.asm** — Division
- **sqrt.asm** / **isqrt.asm** — Square root
- **dist\_fast.asm** — Fast Euclidean distance estimation
- **colorsq.asm** / **colorsq\_sv.asm** / **colorsq\_clip.asm** — Colored squares graphics
- **ic\_banksw.asm** — Intellicart bankswitching
- **ivoice.asm** / **saynum16.asm** / **resrom.asm** — Intellivoice support
- **al2.asm** — SP0256 allophone library
- **jlp\_accel.asm** / **jlp\_savegame.asm** — JLP acceleration and save support
- **initmem.asm** — Memory initialization
- **wnk.asm** — Wait-and-acknowledge routine
- **randfast.asm** — Fast random number generation

## Macros

The `macro/` directory provides macros to simplify programming:

- **util.mac** — Generic utility macros
- **stic.mac** — STIC (display) macros
- **psg.mac** — PSG (sound) macros
- **print.mac** — PRINT routine macros
- **gfx.mac** — Graphics macros
- **cart.mac** — Cartridge setup macros
- **initmem.mac** — Memory initialization macros
- **default.mac** — Default definitions
- **emu\_link.mac** / **el\_event.mac** / **el\_fileio.mac** / **el\_joy.mac** — Emulator link macros
- **cp1600x.mac** — CP-1600X extended instruction macros
- **wide\_gfx.mac** — Wide graphics macros

## License

Copyright (c) 1998-2020, Joseph Zbiciak

Licensed under the [GNU General Public License v2](LICENSE).
