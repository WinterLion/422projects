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

    PCB pcb = {new, 45, 1, 1, 1, 1, 1, 4, 5};
    PCB pcb2 = {new, 23, 2, 0, 2, 2, 3, 2, 1};
    pcb.next_pcb = &pcb2;
    toString(&pcb);
    toString(&pcb2);
    return (EXIT_SUCCESS);
}





