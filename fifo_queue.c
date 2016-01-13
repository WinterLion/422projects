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
    //printf("enqueing P%d\n", block->PC);
	// If the queue is empty
	if (queue->front == NULL) {
		queue->front = block;
		queue->front->next_pcb = NULL;
		queue->back = block;
	} else {	// Add to end of queue
		queue->back->next_pcb = (struct pcb *) block;
		block->next_pcb = NULL;
		queue->back = (PCB_p) queue->back->next_pcb;
	}
	queue->size++;
}

// Remove and return the first PCB block in this queue.
PCB_p dequeue(fifo_queue *queue) {
	PCB_p temp = queue->front;
	if (!temp) {	// If this queue is empty
		printf("\nError, there are no more PCB's in this queue!\n");
	} else {
		queue->front = (PCB_p) queue->front->next_pcb;
		queue->size--;
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
	if (queue->size)
		result = 0;
	else
		result = 1;
	return result;
}

int get_size(fifo_queue *queue) {
	return queue->size;
}

void FIFOQueuetoString(fifo_queue *queue) {
    fifo_queue *tempqueue = create_queue();
    //printf("is_empty %d", is_empty(queue));
    //printf("not is_empty %d", !is_empty(queue));
    while (!is_empty(queue)) {
        //printf("size before dequeue %d", get_size(queue));
        PCB_p temp = dequeue(queue);
        //toStringShort(temp);
        printf("P%d", temp->pid);
        enqueue(tempqueue, temp);
        if (!is_empty(queue)){
            printf("->");
        } else {
            printf("-");    
        }
    }
    printf("*");
    //put the data back in the original queue
    //printf("is_empty2 %d", is_empty(tempqueue));
    //printf("not is_empty2 %d", !is_empty(tempqueue));
    while (!is_empty(tempqueue)) {
        enqueue(queue, dequeue(tempqueue));
    }
}
