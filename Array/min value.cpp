#include<stdio.h>
int main(){
	int arr[5]={3,5,6,2,1},i,min=arr[0];
	
	for(i=0;i<5;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("The minimum	value is= %d",min);
	
	return 0;
}
