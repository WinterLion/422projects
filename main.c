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

/*
 * 
 */
int main(int argc, char** argv) {

    PCB pcb = {new, 0, 0, 0, 0, 0};
    PCB pcb2 = {new, 0, 0, 0, 0, 0};
    pcb.next_pcb = &pcb2;
    toString(&pcb);
    return (EXIT_SUCCESS);
}





