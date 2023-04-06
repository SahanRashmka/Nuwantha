#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "heap.h"
#include "priority_queue.h"

int main(int argc, char *argv[]){
	time_t start,end;

	srand(time(NULL));

	time(&start);

	//sleep for 5-14 seconds. just to demonstrate how the 
	//time() and rand() works. You don't need sleep() for your lab.
	sleep((rand() % 10) + 5);

	time(&end);

	printf("program ran for %.2f seconds\n", difftime(end,start));

}
