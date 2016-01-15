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

/*
 * 
 */
int main(int argc, char** argv) {
  // fifo_queue *q = create_queue();
 //    PCB pcb = {new, 0, 0, 0, 0, 0};
 //    enqueue(q, &pcb);
 //    PCB pcb2 = {new, 0, 0, 0, 0, 0};
 //    enqueue(q, &pcb2);
 //    printf("Hello");
//    pcb.next_pcb = &pcb2;
//    toString(&pcb);

    fifo_queue *queue = create_queue();

    PCB pcb = {new, 1, 23, 0, 23, 23, 23, 4, 5};
    PCB pcb2 = {new, 2, 34, 0, 34, 34, 34, 2, 1};

    enqueue(queue, &pcb);
    to_string_enqueue(queue);

    enqueue(queue, &pcb2);
    to_string_enqueue(queue);

    PCB_p pcb_removed = dequeue(queue);
    to_string_dequeue(queue, pcb_removed);

    pcb_removed = dequeue(queue);
    to_string_dequeue(queue, pcb_removed);

    // pcb.next_pcb = &pcb2;
    // toString(&pcb);
    // toString(&pcb2);
    return (EXIT_SUCCESS);
}
