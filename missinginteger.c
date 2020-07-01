#include<stdio.h>

//Given an array of integers, find the first missing positive integer in linear time and constant space. 
//In other words, find the lowest positive integer that does not exist in the array. 
//The array can contain duplicates and negative numbers as well.
//For example, the input [3, 4, -1, 1] should give 2. The input [1, 2, 0] should give 3.
//You can modify the input array in-place.

int main(){
	
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);
	int array[size];
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	printf("\nArray=[");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i<size-1){
			printf(",");
		}
	}
	printf("]");
	
	int j,count=0;
	int array1[size];
	int b=0;
	for(j=0;j<size;j++){
		if(array[j]>0){
			array1[b]=array[j];
			b++;
			count++;
		}
	}
	
	printf("\nPositive Array=[");
	for(j=0;j<count;j++){
		printf("%d",array1[j]);
		if(j<count-1){
			printf(",");
		}
	}
	printf("]");
	
	int k,m,count2=0;
	for(k=1;;k++){
	  for(m=0;m<count;m++){
	  	if(array1[m]==k){
	  		count2++;
	    	}
	   }
	  if(count2==0){
	  	printf("\nThe lowest positive integer:%d",k);
	  	break;
	    }
	    count2=0;
	}
	

	return 0;
}
