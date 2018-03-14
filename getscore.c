// in this file input_score() funciton is defined
// the scores are givn by the user from keyboard and -1 indicates
//the end of input (sentinel-controlled loop)
#include "scores.h"
#include <stdio.h>

void input_scores(int s[]){
	int i, input = 0;

	printf("Enter scores, -1 to stop: \n");
	for(i=0; i<MAX && input!=-1; i++){
		printf("%d: ", i+1);
		scanf("%d", &input);
		s[i] = input;
	}
	if(i==MAX && s[i-1]!=-1) printf("%d scores are given.\n", i);
	else printf("%d scores are given.\n", i-1);	

}
