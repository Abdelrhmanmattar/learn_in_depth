#ifndef __PLATFORM_TYPE_H__
#define __PLATFORM_TYPE_H__
/*
    s:singed
    u:unsigned
    v:volatile
*/
//=========64bit integers==========
typedef signed long long               sint64;
typedef unsigned long long             uint64;
typedef volatile signed long long      vsint64;
typedef volatile unsigned long long    vuint64;
//=========32bit integers==========
typedef signed int                     sint32;
typedef unsigned int                   uint32;
typedef volatile signed int            vsint32;
typedef volatile unsigned int          vuint32;
/*=========16bit integers==========*/
typedef signed short                   sint16;
typedef unsigned short                 uint16;
typedef volatile signed short          vsint16;
typedef volatile unsigned short        vuint16;
/*=========8bit integers==========*/
typedef signed char                    sint8;
typedef unsigned char                  uint8;
typedef volatile signed char           vsint8;
typedef volatile unsigned char         vuint8;
/*========boolean================*/
typedef unsigned char                  bool;
#define TRUE                           (1)
#define FALSE                          (0)
#endif
