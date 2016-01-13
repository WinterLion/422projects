/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "fifo_queue.h"
#include "fifo_queue_test.h"
#include "PCB.h"

void testFIFO() {
    printf("HOW ABOUT NOW");
    fifo_queue *q = create_queue();
    PCB pcb1 = {new, 10, 0, 0, 3, 1, 0};
    PCB_p t = &pcb1;
    enqueue(q, t); // isnt working;
    
    
//    fifo_toString(q);
//    PCB pcb2 = {new, 1, 0, 0, 15, 75, 0};
//    PCB pcb3 = {new, 2, 0, 0, 14, 3, 0};
//    PCB pcb4 = {new, 3, 0, 0, 13, 65, 0};
//    PCB pcb5 = {new, 4, 0, 0, 12, 55, 0};
//    PCB pcb6 = {new, 5, 0, 0, 11, 45, 0};
//    PCB pcb7 = {new, 6, 0, 0, 10, 6, 0};
//    PCB pcb8 = {new, 7, 0, 0, 9, 15, 0};
//    PCB pcb9 = {new, 8, 0, 0, 1, 25, 0};
//    PCB pcb10 = {new,9, 0, 0, 5, 35, 0};
}