/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FifoQueue.h
 * Author: Cox Family
 *
 * Created on January 8, 2016, 1:56 PM
 */
#include "PCB.h"

#ifndef FIFOQUEUE_H
#define FIFOQUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct fifoqueue {
    PCB (*Pop)();
    int (*Push)(PCB);
    int (*isEmpty)();
    int (*PrintAll)();
} FifoQueue;
typedef FifoQueue * FifoQueue_p;

#ifdef __cplusplus
}
#endif

#endif /* FIFOQUEUE_H */

