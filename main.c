/*******************************************************************************
 * Includes
 ******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "Lib.h"

#define Path "intel.hex"
/*******************************************************************************
 * Codes
 ******************************************************************************/
int main()
{
    FILE *fileOpen;
    uint8_t readChar = 0;
    uint8_t *readChar_ptr = &readChar;
    uint16_t baseAddress = 0;
    uint16_t *baseAddress_ptr = &baseAddress;
    uint8_t recordType = 0x00u;
    uint8_t *recordType_ptr = &recordType;

    bool returnVal = true;

    fileOpen = fopen(Path, "r");
    if (fileOpen == NULL)
    {
        printf("Unable to open file");
        returnVal = false;
    }
    if (returnVal == true)
    {
        ReadMultipleLine(fileOpen, readChar_ptr, baseAddress_ptr, recordType_ptr);
    }

    return 0;
}
/*******************************************************************************
 * End of file
 ******************************************************************************/
