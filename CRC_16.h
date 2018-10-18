#ifndef CRC16_H
#define CRC16_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Derived from CRC algorithm for JTAG ICE mkII, published in Atmel
 * Appnote AVR067.  Converted from C++ to C.
 */

extern unsigned int CRC_Sum(unsigned char* , unsigned char, unsigned int);

/*
 * Verify that the last two bytes is a (LSB first) valid CRC of the
 * message.
 */
extern unsigned char CRC_Verify(unsigned char* , unsigned char);

#ifdef __cplusplus
}
#endif

#endif
