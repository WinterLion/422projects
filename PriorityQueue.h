/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PriorityQueue.h
 * Author: Cox Family
 *
 * Created on January 8, 2016, 1:56 PM
 */

#include "fifo_queue.h"

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#ifdef __cplusplus
extern "C" {
#endif

void priorityQueue();
int addPCB(PCB thePCB);
PCB GetNext();

#ifdef __cplusplus
}
#endif

#endif /* PRIORITYQUEUE_H */

