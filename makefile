main: main.c PCB.o fifo_queue.o PriorityQueue.o
		gcc -o main main.c PCB.o fifo_queue.o PriorityQueue.o

PriorityQueue.o: PriorityQueue.c PriorityQueue.h
		gcc -c PriorityQueue.c

fifo_queue.o: fifo_queue.c fifo_queue.h
		gcc -c fifo_queue.c

PCB.o: PCB.h PCB.c
		gcc -c PCB.c