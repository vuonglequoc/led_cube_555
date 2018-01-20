/*
 * character.c
 *
 * Created: 20-Jan-2018
 * Author: Vuong Le
 */

#include <string.h>
#include "character.h"

                                                         ////
                                                   ////
                                             ////
                                       ////
                                 ////
const uint8_t bufferCharacter[] = { 0x88, 0xF8, 0x88, 0x88, 0x70, // A
                                 0x78, 0x88, 0x78, 0x88, 0x78, // B
                                 0x70, 0x08, 0x08, 0x08, 0x70, // C
                                 0x78, 0x88, 0x88, 0x88, 0x78, // D
                                 0xF8, 0x08, 0x78, 0x08, 0xF8, // E
                                 0x08, 0x08, 0x78, 0x08, 0xF8, // F
                                 0x70, 0x88, 0xC8, 0x08, 0x70, // G
                                 0x88, 0x88, 0xF8, 0x88, 0x88, // H
                                 0x70, 0x20, 0x20, 0x20, 0x70, // I
                                 0x20, 0x50, 0x40, 0x40, 0x70, // J
                                 0x88, 0x48, 0x38, 0x28, 0x48, // K
                                 0xF0, 0x10, 0x10, 0x10, 0x10, // L
                                 0x88, 0x88, 0xA8, 0xD8, 0x88, // M
                                 0x88, 0xC8, 0xA8, 0x98, 0x88, // N
                                 0x70, 0x88, 0x88, 0x88, 0x70, // O
                                 0x08, 0x08, 0x78, 0x88, 0x78, // P
                                 0xB0, 0x48, 0xA8, 0x88, 0x70, // Q
                                 0x88, 0x48, 0x38, 0x48, 0x38, // R
                                 0x70, 0x80, 0x70, 0x08, 0x70, // S
                                 0x20, 0x20, 0x20, 0x20, 0xF8, // T
                                 0x70, 0x88, 0x88, 0x88, 0x88, // U
                                 0x20, 0x50, 0x50, 0x88, 0x88, // V
                                 0x50, 0xA8, 0xA8, 0x88, 0x88, // W
                                 0x88, 0x50, 0x20, 0x50, 0x88, // X
                                 0x20, 0x20, 0x20, 0x50, 0x88, // Y
                                 0xF8, 0x10, 0x20, 0x40, 0xF8, // Z
                                 0x00, 0x00, 0x00, 0x00, 0x00, // space
                                 0x70, 0xC8, 0xA8, 0x98, 0x70, // 0
                                 0x20, 0x20, 0x20, 0x30, 0x20, // 1
                                 0xF8, 0x10, 0x60, 0x88, 0x70, // 2
                                 0x70, 0x80, 0x60, 0x80, 0x70, // 3
                                 0x40, 0xF8, 0x48, 0x50, 0x60, // 4
                                 0x78, 0x80, 0x78, 0x08, 0x78, // 5
                                 0x70, 0x88, 0x78, 0x08, 0x70, // 6
                                 0x20, 0x20, 0x40, 0x80, 0xF0, // 7
                                 0x70, 0x88, 0x70, 0x88, 0x70, // 8
                                 0x70, 0x80, 0xF0, 0x88, 0x70  // 9
};

                                                            ////
                                                      ////
                                                ////
                                          ////
                                    ////
const uint8_t bufferCharacterSpin[] = {0x22, 0x3E, 0x22, 0x22, 0x1C, // A
                                    0x1E, 0x22, 0x1E, 0x22, 0x1E, // B
                                    0x1C, 0x02, 0x02, 0x02, 0x1C, // C
                                    0x1E, 0x22, 0x22, 0x22, 0x1E, // D
                                    0x3E, 0x02, 0x1E, 0x02, 0x3E, // E
                                    0x02, 0x02, 0x1E, 0x02, 0x3E, // F
                                    0x1C, 0x22, 0x3A, 0x02, 0x1C, // G
                                    0x22, 0x22, 0x3E, 0x22, 0x22, // H
                                    0x1C, 0x08, 0x08, 0x08, 0x1C, // I
                                    0x08, 0x14, 0x10, 0x10, 0x1C, // J
                                    0x22, 0x12, 0x0E, 0x0A, 0x12, // K
                                    0x3C, 0x04, 0x04, 0x04, 0x04, // L
                                    0x22, 0x22, 0x2A, 0x36, 0x22, // M
                                    0x22, 0x32, 0x2A, 0x26, 0x22, // N
                                    0x1C, 0x22, 0x22, 0x22, 0x1C, // O
                                    0x04, 0x04, 0x1C, 0x24, 0x1C, // P
                                    0x2C, 0x12, 0x2A, 0x22, 0x1C, // Q
                                    0x22, 0x12, 0x0E, 0x12, 0x0E, // R
                                    0x1E, 0x20, 0x1C, 0x02, 0x3C, // S
                                    0x08, 0x08, 0x08, 0x08, 0x3E, // T
                                    0x1C, 0x22, 0x22, 0x22, 0x22, // U
                                    0x08, 0x14, 0x14, 0x22, 0x22, // V
                                    0x14, 0x2A, 0x2A, 0x22, 0x22, // W
                                    0x22, 0x14, 0x08, 0x14, 0x22, // X
                                    0x08, 0x08, 0x08, 0x14, 0x22, // Y
                                    0x3E, 0x04, 0x08, 0x10, 0x3E, // Z
                                    0x00, 0x00, 0x00, 0x00, 0x00, // space
                                    0x1C, 0x32, 0x2A, 0x26, 0x1C, // 0
                                    0x08, 0x08, 0x08, 0x0C, 0x08, // 1
                                    0x3E, 0x04, 0x18, 0x22, 0x1C, // 2
                                    0x1C, 0x20, 0x18, 0x20, 0x1C, // 3
                                    0x10, 0x3E, 0x12, 0x14, 0x18, // 4
                                    0x1C, 0x20, 0x1E, 0x02, 0x1E, // 5
                                    0x1C, 0x22, 0x1E, 0x02, 0x1C, // 6
                                    0x08, 0x08, 0x10, 0x20, 0x3C, // 7
                                    0x1C, 0x22, 0x1C, 0x22, 0x1C, // 8
                                    0x1C, 0x20, 0x3C, 0x22, 0x1C  // 9
};

uint8_t checkBufferIndex(char character)
{
    uint8_t index = character-'\0';
    if (index >= 48 && index <= 57) // '0' - '9'
    {
        index -= 21; // -48 + 27
    }
    else if (index >= 65 && index <= 90) // 'A' - 'Z'
    {
        index -= 65;
    }
    else
    {
        index = 26; // ' '
    }
    return index;
}

void GetBufferFromCharacter(char character, uint8_t* returnValue)
{
    uint8_t index = checkBufferIndex(character);
    memcpy(returnValue, &bufferCharacter[index*5], 5);
}

void GetBufferFromCharacterSpin(char character, uint8_t* returnValue)
{
    uint8_t index = checkBufferIndex(character);
    memcpy(returnValue, &bufferCharacterSpin[index*5], 5);
}