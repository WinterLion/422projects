/*
 * fifo_queue.h
 *
 * 	Created on: Jan 7, 2016
 * 		Author: Jonah Howard
 */

#include <stdio.h>
#include <stdlib.h>



void enqueue(PCB *block);
PCB *dequeue();
PCB *peek();
int is_empty(); // Return 1 if empty
int get_size();

#ifndef FIFO_QUEUE_H_
#define FIFO_QUEUE_H_
//#include "fifo_queue.c"
#endif /* fifo_queue.h */

