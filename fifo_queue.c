/*
 * fifo_queue.c
 *
 * 	Created on: Jan 7, 2016
 * 		Author: Jonah Howard
 */

#include "fifo_queue.h"

// Global Variables
//static PCB_p queue->front;
//static PCB_p queue->back;
//static int size = 0;
//static struct fifo_queue *queue = NULL;

fifo_queue * create_queue() {
	fifo_queue *queue;
	queue = malloc(sizeof(queue));
	queue->front = NULL;
	queue->back = NULL;
	queue->size = 0;
	return queue;
}

// Add PCB block to this queue with the same priority as the others in this queue
void enqueue(fifo_queue *queue, PCB_p block) {
	// If the queue is empty
	printf("%d", queue->size);
	if (!queue->size) {
		queue->front = block;
		queue->front->next_pcb = NULL;
		queue->back = block;
	} else {	// Add to end of queue
		queue->back->next_pcb = block;
		block->next_pcb = NULL;
		queue->back = queue->back->next_pcb;
	}
	queue->size++;
}

// Remove and return the first PCB block in this queue.
PCB_p dequeue(fifo_queue *queue) {
	PCB_p temp = queue->front;
	if (!temp) {	// If this queue is empty
		printf("\nError, there are no more PCB's in this queue!");
	} else {
		queue->front = queue->front->next_pcb;
		queue->size++;
	}
	return temp;
}

// Return a pointer referencing the first PCB block of this queue
PCB_p peek(fifo_queue *queue) {
	if (!queue->front) {	// Check if queue is empty
		printf("\nError, there are no more PCB's in this queue!");
	}
	return queue->front;
}

// Returns 1 if this queue is empty, 0 otherwise
int is_empty(fifo_queue *queue) {
	int result;
	if (!queue->size)
		result = 1;
	else
		result = 0;
	return result;
}

int get_size(fifo_queue *queue) {
	return queue->size;
}
