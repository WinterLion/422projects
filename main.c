/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
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
int main(int argc, char** argv) {
//    printf("Testing PCB: \n");
//    printf("Creating PCB with PID=1 and priority = 1\n");
    PCB pcb = {1, 1, new};
//    toStringShort(&pcb);
//    printf("Creating PCB with PID=20 and priority = 6\n");
//    PCB pcb20 = {20, 6};
//    toStringShort(&pcb20);
////        pcb.next_pcb = (PCB *) &pcb20;
////    toString(&pcb);
//    printf("Creating PCB with PID=5 and priority = 3\n");
//    PCB pcb5 = {5, 3};
//    toStringShort(&pcb5);
//    
//    printf("Testing fifo_queue: \n");
//    printf("Creating a queue\n");
//    fifo_queue *q = create_queue();
//    printf("Q: *\n");
//    printf("Q: ");
//    FIFOQueuetoString(q);
//    printf("\n");
//    enqueue(q, &pcb);       
//    printf("Q: ");
//    FIFOQueuetoString(q);
//    printf("\n");
//    printf("Q: P1-* : ");
//    toStringShort(&pcb);
//    enqueue(q, &pcb20);
//    printf("Q: ");
//    FIFOQueuetoString(q);
//    printf("\n");
//    printf("Q: P1-P20-* : ");
//    toStringShort(&pcb20);
//    enqueue(q, &pcb5);    
//    printf("Q: ");
//    FIFOQueuetoString(q);
//    printf("\n");
//    printf("Q: P1-P20-P5-* : ");
//    toStringShort(&pcb5);
//    //dequeue
//    printf("Testing dequeue: \n");
//    printf("Q: P20-P5-* : ");
//    toStringShort(dequeue(q));
//    printf("Q: P5-* : ");
//    toStringShort(dequeue(q));
//    printf("Q: * : ");
//    toStringShort(dequeue(q));
//    printf("test dequeue on empty queue: \n");
//    toStringShort(dequeue(q));
    
    printf("Testing priority queue\n");
    fifo_queue *thePQ = createPriorityQueue();
    addPCB(&pcb, thePQ);
    printf("Testing priority queue1\n");
    PriorityQueuetoString(thePQ);
    //toString(&pcb);
    return (EXIT_SUCCESS);
}





