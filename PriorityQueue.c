#include <stdio.h>
#include <stdlib.h>

#include "fifo_queue.h"
#include "PCB.h"

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */



#define NumberOfPriorities 16

fifo_queue *MainArray[NumberOfPriorities];

void priorityQueue() {
    int i;
    for (i = 0; i < NumberOfPriorities; i++ ) {
      //MainArray[i] = (fifo_queue*)malloc(sizeof(fifo_queue));
      MainArray[i] = create_queue();
      //MainArray[i] = malloc(sizeof(FifoQueue));
    }
}

int addPCB(PCB thePCB) {
    int answer = 0;
    if (thePCB.Priority > 0 && thePCB.Priority < NumberOfPriorities) {
        enqueue(MainArray[thePCB.Priority], &thePCB); 
        answer = 1;
    } else {
        printf("Tried to add PCB with out of bounds priority.");
    }
    return answer;
}

//returns the next PCB pointer in the priority queue or null if none in all the queues
PCB_p GetNext() {
    int keepGoing = 1;
    int priorityCounter = 0;
    PCB_p answerPCB = NULL;
    
    while (keepGoing && priorityCounter < NumberOfPriorities) {
        if (!is_empty(MainArray[priorityCounter])) {
            answerPCB = dequeue(MainArray[priorityCounter]);
            keepGoing = 0;
        }        
        priorityCounter++;
    }
    if (keepGoing) {
        printf("Priority Queue is Empty");
    }   
    return answerPCB;
}

// int PrintAll() {
//     int i;
//     for (i = 0; i < NumberOfPriorities; i++ ) {        
//       MainArray[i]->PrintAll();
//     }
// }