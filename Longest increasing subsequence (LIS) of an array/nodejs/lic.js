function longestSeq(input1)
{ 
	var i =0,
		currentLargestNumber = input1[0],
		currentIndex=1,
		tempArray = [],
		len = input1.length;
		
	tempArray[0] = currentLargestNumber;
	
	for(i=1;i<len;i++){
		if(currentLargestNumber < input1[i]){
			currentLargestNumber = input1[i];
			tempArray[currentIndex++] = input1[i];
			
		}
	}
	return tempArray;
} 


longestSeq([0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15]);
