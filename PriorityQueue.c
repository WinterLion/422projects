#include <stdio.h>
#include <stdlib.h>

#include "FifoQueue.h"
#include "PCB.h"

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



#define NumberOfPriorities 16

FifoQueue_p MainArray[NumberOfPriorities];

int priorityQueue() {
    int i;
    for (i = 0; i < NumberOfPriorities; i++ ) {
      MainArray[i] = (FifoQueue_p)malloc(sizeof(FifoQueue));
      MainArray[i] = malloc(sizeof(FifoQueue));
    }
}

int addPCB(PCB thePCB) {
    MainArray[thePCB.Priority]->enqueue(thePCB); 
}

PCB GetNext() {
    int keepGoing = 0;
    int priorityCounter = 0;
    PCB *answerPCB = malloc(sizeof(PCB));
    
    while (keepGoing && priorityCounter < NumberOfPriorities) {
        if (!MainArray[priorityCounter]->isEmpty()) {
            *answerPCB = MainArray[priorityCounter]->dequeue();
            keepGoing = 1;
        }        
        priorityCounter++;
    }
    if (keepGoing) {
        printf("Priority Queue is Empty");
    }   
    return *answerPCB;
}

// int PrintAll() {
//     int i;
//     for (i = 0; i < NumberOfPriorities; i++ ) {        
//       MainArray[i]->PrintAll();
//     }
// }