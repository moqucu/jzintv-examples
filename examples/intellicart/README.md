# Intellicart Bankswitching Examples

This directory contains examples for testing and utilizing the Intellicart bankswitching logic.

## Bankswitching Logic

The mapping involves writing to addresses `0x0040` through `0x005F`. These writes are loaded into a bankswitch table with the following mapping:

| Register | Address Window |
|----------|----------------|
| 0x0040   | 0x0000 - 0x07FF|
| 0x0041   | 0x1000 - 0x17FF|
| ...      | ...            |
| 0x004F   | 0xF000 - 0xF7FF|
| 0x0050   | 0x0800 - 0x0FFF|
| 0x0051   | 0x1800 - 0x1FFF|
| ...      | ...            |
| 0x005F   | 0xF800 - 0xFFFF|

### Implementation Details

- To remap a window (e.g., `0x5000-0x57FF`) to a specific internal RAM space (e.g., `0x1000-0x17FF`), write the remap bits to the corresponding register.
- The remap bits are taken from the lower 8 bits of the written data.
- The remapping works by **XORing** the 8-bit value written to the bank-switch register with the 8 most significant bits (MSBs) of the address.
- Ensure the remap enable bit for the target address window is set when enable tables are downloaded.

---
*Historical Note: This logic was based on technical discussions between Joe Zbiciak and Chad.*
