//Find the maximum value

#include<stdio.h>
int main(){
	int arr[]={4,6,7,9,1,2,200,34,56,30,67,68,90},i,max=arr[0];
	for(i=0;i<=12;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
				
				printf("Max is=%d",max);
	
	return 0;
}
