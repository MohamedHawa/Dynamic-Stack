#ifndef _PLATEFORM_DATA_TYPES_H_
#define _PLATEFORM_DATA_TYPES_H_

#define  CPU_TYPE_8     8
#define  CPU_TYPE_16    16
#define  CPU_TYPE_32    32
#define  CPU_TYPE_64    62

#define CPU_USED_TYPE     (CPU_TYPE_64)

#if  (CPU_USED_TYPE==CPU_TYPE_64)

typedef  unsigned char        boolean;
typedef  unsigned char         uint8;
typedef  unsigned short       uint16;
typedef  unsigned int         uint32;
typedef  unsigned long long   uint64;
typedef  signed char          sint8;
typedef  signed short         sint16;
typedef  signed int            sint32;
typedef  signed long long      sint64;
typedef  float                 float32;
typedef  double                float64;

#elif(CPU_USED_TYPE==CPU_TYPE_32)


typedef  unsigned char        boolean;
typedef  unsigned char         uint8;
typedef  unsigned short       uint16;
typedef  unsigned long        uint32;
typedef  unsigned long long   uint64;
typedef  signed char          sint8;
typedef  signed short         sint16;
typedef  signed long            sint32;
typedef  signed long long      sint64;
typedef  float                 float32;
typedef  double                float64;


#elif (CPU_USED_TYPE==CPU_TYPE_16)


typedef  unsigned char        boolean;
typedef  unsigned char         uint8;
typedef  unsigned short       uint16;
typedef  unsigned long        uint32;
typedef  unsigned long long   uint64;
typedef  signed char          sint8;
typedef  signed short         sint16;
typedef  signed long            sint32;
typedef  signed long long      sint64;
typedef  float                 float32;
typedef  double                float64;

#elif  (CPU_USED_TYPE==CPU_TYPE_8)

typedef  unsigned char           boolean;
typedef  signed char             sint8;
typedef  signed short            sint16;
typedef  unsigned short          uint16;
typedef  signed short            sint16;
typedef  signed short long       sint24;
typedef  unsigned short long     uint24;
typedef  signed long             sint32;
typedef  unsigned long           uint32;
typedef  signed long long        sint32;
typedef  unsigned long long      uint32;




#endif
//////////////////////////////////////////////////////
#endif
