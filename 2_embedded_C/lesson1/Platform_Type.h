#ifndef __PLATFORM_TYPE_H__
#define __PLATFORM_TYPE_H__
/*
    s:singed
    u:unsigned
    v:volatile
*/

/*=========64bit integers==========*/
typedef signed long long               sint64_t;
typedef unsigned long long             uint64_t;
typedef volatile signed long long      vsint64_t;
typedef volatile unsigned long long    vuint64_t;


/*=========32bit integers==========*/
typedef signed int                     sint32_t;
typedef unsigned int                   uint32_t;
typedef volatile signed int                   vsint32_t;
typedef volatile unsigned int          vuint32_t;



/*=========16bit integers==========*/
typedef signed short                   sint16_t;
typedef unsigned short                 uint16_t;
typedef volatile signed short          vsint16_t;
typedef volatile unsigned short        vuint16_t;


/*=========8bit integers==========*/
typedef signed char                    sint8_t;
typedef unsigned char                  uint8_t;
typedef volatile signed char           vsint8_t;
typedef volatile unsigned char         vuint8_t;


/*========boolean================*/
typedef unsigned char                  bool_t;
#define TRUE                           (1)
#define FALSE                          (0)

#endif