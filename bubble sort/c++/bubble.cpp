#include "iostream"
#include "ctime"
#include "algorithm"
#include "cstdlib"

using namespace std;
int main (int argc, char *argv[]) {
	
	int arr[25000],
		num = 0, 
		i = 0,
		j = 0,
		len = 25000,
		temp;		
		
	double timeSpan;
	
	//generating random number
	for(i=0;i<len;i++){
		arr[i] = (rand() % len)+1;	
	}

	//Total Time taken
	time_t stop, start = time(NULL);
	
	//	bubble sort
	for(i=1;i<len;i++){
		for(j=0;j<len-1;j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}		
		}
	}
	stop = time(NULL);
	
	//time taken
	timeSpan = difftime(stop, start);
	
	std::cout << "Sorted array length:" << len << ", time taken to sort(bubble sort): " << timeSpan << " sec" << endl;	
}


