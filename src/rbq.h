#ifndef  __TYRBQ_H__
#define  __TYRBQ_H__

#include <stdint.h>
#pragma pack(1)


typedef struct{
    uint32_t  maxlen;
    uint8_t   *buf;
    uint32_t  len;
}ty_rbq_t;




#pragma pack(0)

void *rbq_malloc( uint32_t qnum, uint32_t readthrnum, uint32_t writethrnum, uint32_t maxsize);

#endif






