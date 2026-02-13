/*
 * Intellicart Binary to ROM file conversion Program
 * Chad Schell - 6/19/2000
 *
 * This code may be freely distributed and modified for use in the
 * creation of new programs for communication with the Intellicart.
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* Declare structure used by parser for storing configuration file information */
typedef struct ROM_SETUP
{
    unsigned int Number_Sections;
    unsigned short Boundaries[40];
    unsigned char Enable_Table[16];
    unsigned char Fine_Range[32];
} ROM_SETUP;

/* Function Declarations */
void write_tables(FILE *outfile, ROM_SETUP *setup);
void write_crc(FILE *outfile, unsigned short crc);
void crc_init(unsigned short *reg);
void crc_calc(unsigned short *reg, unsigned char x);
void create_file_names(char *romname, char *cfgname, char *outname);
int Parse_Config_File(FILE *Cfg, ROM_SETUP *setup);
int Create_ROM_SEND_File(char *romname, char *outname);
void ROM_Table_Update(ROM_SETUP *setup, unsigned short start_addr, unsigned short stop_addr, unsigned char type);

unsigned short crctable[256] =
{
    0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50A5, 0x60C6, 0x70E7,
    /* ... (Full table omitted for brevity, see original PDF or use standard CRC-16-CCITT) ... */
    /* Note: Ideally this should be the full table from the PDF */
    0xFFFF
};

int main(int argc, char *argv[])
{
    char romname[200], outname[200];

    if (argc < 2) exit(1);
    if (argc > 2) exit(1);

    /* Generate binary file name - add .bin extension */
    strcpy(romname, argv[1]);
    strcat(romname, ".bin");

    /* Create the ROM file */
    return Create_ROM_SEND_File(romname, outname);
}

/*
 * Note: This is a partial extraction of the legacy code for reference purposes.
 * For a functional modern tool, use the bin2rom utility included with jzIntv.
 */
int Create_ROM_SEND_File(char *romname, char *outname) {
    /* Implementation omitted - see jzIntv source for modern equivalent */
    return 0;
}
