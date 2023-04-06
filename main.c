#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heap.h"
#include "priority_queue.h"

int main() {
    // Initialize heap
    Heap heap;
    heap_init(&heap);

    // Initialize priority queue
    Queue pqueue;
    pqueue_init(&pqueue);

    // Time measurements for priority queue
    clock_t start, end;
    double cpu_time_used;
    srand(time(NULL));

    // Enqueue 1000 nodes in priority queue
    start = clock();
    for (int i = 0; i < 1000; i++) {
        int priority = rand() % 100;
        pqueue_enqueue(&pqueue, priority, NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Enqueue 1000 nodes in priority queue: %f seconds\n", cpu_time_used);

    // Enqueue 10000 nodes in priority queue
    start = clock();
    for (int i = 0; i < 10000; i++) {
        int priority = rand() % 100;
        pqueue_enqueue(&pqueue, priority, NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Enqueue 10000 nodes in priority queue: %f seconds\n", cpu_time_used);

    // Enqueue 100000 nodes in priority queue
    start = clock();
    for (int i = 0; i < 100000; i++) {
        int priority = rand() % 100;
        pqueue_enqueue(&pqueue, priority, NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Enqueue 100000 nodes in priority queue: %f seconds\n", cpu_time_used);

    // Free memory allocated for priority queue
    pqueue_destroy(&pqueue);

    // Time measurements for heap
    srand(time(NULL));

    // Enqueue 1000 nodes in heap
    start = clock();
    for (int i = 0; i < 1000; i++) {
        int priority = rand() % 100;
        heap_insert(&heap, priority, NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Enqueue 1000 nodes in heap: %f seconds\n", cpu_time_used);

    // Enqueue 10000 nodes in heap
    start = clock();
    for (int i = 0; i < 10000; i++) {
        int priority = rand() % 100;
        heap_insert(&heap, priority, NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Enqueue 10000 nodes in heap: %f seconds\n", cpu_time_used);

    // Enqueue 100000 nodes in heap
    start = clock();
    for (int i = 0; i < 100000; i++) {
        int priority = rand() % 100;
        heap_insert(&heap, priority, NULL);
    }
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Enqueue 100000 nodes in heap: %f seconds\n", cpu_time_used);

    // Free memory allocated for heap
    heap_destroy(&heap);

	    return 0;
}

   
