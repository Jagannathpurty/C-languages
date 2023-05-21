#include<stdio.h>
int main(){
	
	int arr[10]={24,5,6,8,23,7,88,33,56,78,},i,min=arr[0];
	for(i=0;i<=10;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Min is=%d",min);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
