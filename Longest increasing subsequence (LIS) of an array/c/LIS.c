#include "stdio.h"
#include "string.h"
#include "stdlib.h"


void printSizeOf(int intArray[])
{
    printf("sizeof of parameter: %d\n", (int) sizeof(intArray));
}

void printLength(int intArray[])
{
    printf("Length of parameter: %d\n", (int)( sizeof(intArray) / sizeof(intArray[0]) ));
}

int main(){
	int a[16] = {0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15};
	int i =0;
	
	longestSeq(a, sizeof(a)/sizeof(int));	
	
}

int longestSeq(int input1[], int len)
{
	int i =0,
		currentLargestNumber = input1[0],
		currentIndex=1;	
	
	int* tempArray = malloc(len * sizeof(int));
	tempArray[0] = currentLargestNumber;
	
	for(i=1;i<len;i++){
		if(currentLargestNumber < input1[i]){
			currentLargestNumber = input1[i];
			tempArray[currentIndex++] = input1[i];
			
		}
	}
	
	//resizing the array
	tempArray = realloc(tempArray, currentIndex * sizeof(int));
	
	
	// Print the result
	for(i=0;i<currentIndex;i++){
		printf("%d ", tempArray[i]);
	}
	
	return *tempArray;
}


