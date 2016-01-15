/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testPQ.c
 * Author: Cox Family
 *
 * Created on January 8, 2016, 1:34 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "PCB.h"
#include "fifo_queue.h"
#include "PriorityQueue.h"

/*
 * 
 */
int testPQ() {
    printf("\nTestPQ started\n");
    PCB pcb = {new, 1, 23, 0, 2, 23, 23, 4, 5}; 
    //toString(&pcb);   
    fifo_queue *thePQ = createPriorityQueue();
    printf("Testing priority queue toString on empty\n");
    PriorityQueuetoString(thePQ);
    printf("Testing priority queue addPCB\n");   
    addPCB(&pcb, thePQ);
    printf("Testing priority queue toString\n");
    PriorityQueuetoString(thePQ);
    printf("Testing that I didn't mess up any queues with the last toString\n");
    PriorityQueuetoString(thePQ);
    printf("Testing GetNext \n");
    toString(GetNext(thePQ));
    printf("Testing GetNext on Empty PQ\n");
    toString(GetNext(thePQ));
    return (EXIT_SUCCESS);
}
