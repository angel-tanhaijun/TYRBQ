#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rbq.h"

#define MAX_THR_NUM          64
#define MAX_NUM(x, y)   (x > y ? x : y)  

typedef struct{
    uint32_t readtime;    
    uint32_t writetime;
    uint32_t head;
    uint32_t tail;
    uint32_t tag;
    uint32_t maxsize;
    uint8_t *space;
}ty_rbq_thr_t;

typedef struct{
    uint32_t thridnum;
    uint32_t thridgrop[MAX_THR_NUM];
}ty_rbq_remb_t;

typedef struct{
    uint32_t      readthrnum;
    ty_rbq_remb_t readthrinfo;
    uint32_t      writethrnum;
    ty_rbq_remb_t writethrinfo;
    uint32_t      rbqthrnum;
    ty_rbq_thr_t *rbqthr;
}ty_rbq_hand_t;



void *rbq_malloc(uint32_t qnum, uint32_t readthrnum, uint32_t writethrnum, uint32_t maxsize)
{
    if(readthrnum <= 0 || writethrnum <= 0 || maxsize < 3 || qnum < MAX_NUM(readthrnum, writethrnum)) 
    {
        printf("rbq_malloc fail[%s-%d-%s]\n", __FILE__, __LINE__, __func__);
        exit(0);
    }
    return NULL;    
}

