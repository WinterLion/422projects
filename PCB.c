/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h> 
#include "PCB.h"

/**
 * Gets the state name and returns the state name in a String.
 * @param enum state_type representing the current state
 * @return char* representing the state name
 */
const char* getStateName(enum state_type state) 
{
   switch (state) 
   {
      case new: return "NEW";
      case ready: return "READY";
      case running: return "RUNNING";
      case waiting: return "WAITING";
      case halted: return "HALTED";
   }
}

/**
 * Takes a PCB pointer and prints out the contents of the PCB
 * @param PCB_p pointer referencing the PCB to print
 */
void toString(PCB_p pcb_p) {
    printf("PCB:\n");

    printf("\tPID: %s\n", pcb_p->pid);
    printf("\tState: %s\n", getStateName(pcb_p->state));
    printf("\tPC: %d\n", pcb_p->PC);

    // prints the register files associated with this PCB
    printf("\tReg Files\n");
    if (pcb_p->reg_file) {
        int i;
        for (i = 0; i < NUMREGS; i++) {
            printf("\t\tREG%d: %d\n", i, pcb_p->reg_file[i]);
        }
        printf("\n");
    } else {
        printf("\t\tNONE\n\n");
    }

    // if there exists a following pcb, print out the next address
    if (pcb_p->next_pcb) {
        PCB_p next = pcb_p->next_pcb;
        printf("\tNext Struct Address: %d\n", next->address_space);
    } else {
    // otherwise print nothing
        printf("\tNext Struct Address: NULL\n");
    }

    printf("\tPriority: %d\n", pcb_p->Priority);
    printf("\tAddress Space: %d\n", pcb_p->address_space);
}