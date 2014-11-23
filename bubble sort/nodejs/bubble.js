
var arr = [],
	len = 25000,
	i=0,
	temp,
	j=0,
	start,
	stop;

//generating random number
for(i=0;i<len;i++){
	arr.push((Math.random() % len)+1);	
}

start = new Date();
//bubble sort
for(i=1;i<len;i++){
	for(j=0;j<len-1;j++){
		if(arr[j] > arr[j+1]){
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}		
	}
}
stop = new Date();

console.log("Sorted array length: " + len + ", time taken to sort(bubble sort): " + (stop - start) + " ms");