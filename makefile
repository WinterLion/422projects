main: main.c PCB.o FifoQueue.o PriorityQueue.o
		gcc -o main main.c PCB.o FifoQueue.o PriorityQueue.o

PriorityQueue.o: PriorityQueue.c PriorityQueue.h
		gcc -c PriorityQueue.c

FifoQueue.o: FifoQueue.c FifoQueue.h
		gcc -c FifoQueue.c

PCB.o: PCB.h PCB.c
		gcc -c PCB.c