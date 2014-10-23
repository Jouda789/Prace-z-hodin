#include <stdio.h>
#include <stdlib.h>
typedef int tni;
#define NIC NULL
#define VELIKOST 123


int main() {
	int * tresen=malloc(sizeof (tni)* VELIKOST);
	if(tresen == NIC) {
		printf("Ach, tak skleroza.\n");
		return 0;
	}

	int plod = 0;

	int kmen = -1;

	while (plod < VELIKOST) {
		kmen = scanf("%d", &tresen [plod]);
		plod++;
		if (kmen != 1) {
			break;
		}
	}
	
	printf("Bum:");
	for(int plot=plod; plot>= 0 ; plot --) { 
		printf(" %d" , tresen [plot]); 
	}
	
 	printf("\n"); 
 
 return 0;
 }
