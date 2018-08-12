/*
 * commonDataTypes.h
 *
 *  Created on: 2018��3��9��
 *      Author: pxf
 */

#ifndef COMMONDATATYPES_H_
#define COMMONDATATYPES_H_

// �汾����---------------------------------------------------------------------
#define COM_DATA_TYPES_VERSION    0xC00D00    // C����v��D����.����ǰ�汾v1.00

// �����������Ͷ���
#ifndef FALSE
#define FALSE    0
#endif
#ifndef TRUE
#define TRUE     1
#endif
#ifndef NULL
#define NULL     ((void *)0)
#endif

// ����
typedef char                  int8;
typedef short                 int16;
typedef long                  int32;
typedef long long             int64;

// �޷�����
typedef unsigned char         uint8;
typedef unsigned short        uint16;
typedef unsigned long         uint32;
typedef unsigned long long    uint64;

// ����
typedef float                 float32;
typedef double                float64;



#endif /* COMMONDATATYPES_H_ */
