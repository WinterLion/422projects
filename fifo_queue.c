/*
 * fifo_queue.c
 *
 * 	Created on: Jan 7, 2016
 * 		Author: Jonah Howard
 */

#include "PCB.h"
#include "fifo_queue.h"

// Global Variables
static struct PCB *queue_front;
static struct PCB *queue_back;
static int size;

// Add PCB block to this queue with the same priority as the others in this queue
void enqueue(PCB *block) {
	// If the queue is empty
	if (queue_front == NULL) {
		queue_front = block;
		*queue_front->*next_pcb = NULL;
		queue_back = block;
	} else {	// Add to end of queue
		*queue_back->next_pcb = block;
		block->next_pcb = NULL;
		queue_back = *queue_back->next_pcb;
	}
	size++;
}

// Remove and return the first PCB block in this queue.
PCB *dequeue() {
	PCB *temp = queue_front;
	if (!temp) {	// If this queue is empty
		printf("\nError, there are no more PCB's in this queue!");
	} else {
		queue_front = *queue_front->next_pcb;
		size++;
	}
	return temp;
}

// Return a pointer referencing the first PCB block of this queue
PCB *peek() {
	if (!queue_front) {	// Check if queue is empty
		printf("\nError, there are no more PCB's in this queue!");
	}
	return queue_front;
}

// Returns 1 if this queue is empty, 0 otherwise
int is_empty() {
	int result;
	if (size)
		result = 1;
	else
		result = 0;
	return result;
}

int get_size() {
	return size;
}
