#include <stdio.h>
#include "scores.h"

void output_result(const int m[], const int stat[]){
	int i;
	printf("Here are the marks: \n");
	for(i=0; i<MAX && m[i] != -1; i++);{
		printf("%4d", m[i]);
	}
	printf("\nHere are the statistics: \n");
	for(i=0; i<6; i++){
		printf("Mark %d: %d hits.\n", i, stat[i]);
	}
}