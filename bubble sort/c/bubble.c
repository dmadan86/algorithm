#include "stdio.h"
#include "time.h"

int main (int argc, char *argv[]) {

	int arr[25000],
		num = 0, 
		i = 0,
		j = 0,
		len = 25000,
		temp;		
		
	//generating random number
	for(i=0;i<len;i++){
		arr[i] = (rand() % len)+1;	
	}	
	
	//Total Time taken
	clock_t start, stop;
	double timeSpan;
	
	start = clock();
	for(i=1;i<len;i++){
		for(j=0;j<len-1;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}		
		}
	}
	stop = clock();
	timeSpan = (double)(stop - start) / CLOCKS_PER_SEC;
	
	printf("Sorted array length: %d, time taken to sort(bubble sort): %f sec", len, timeSpan);
	getch(); 
}


