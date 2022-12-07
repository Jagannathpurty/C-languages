#include<stdio.h>
void quicksort(int [],int,int);
int partition(int [],int,int);


void quicksort(int arr[],int start,int end){
	if(start<end){
		int pindex=partition(arr,start,end);
		quicksort(arr,start,pindex-1);
		quicksort(arr,pindex+1,end);
		
	}
}
int partition(int arr[],int start,int end){
	int pivot=arr[end];
	int i=start;
	int pindex=start;
	int temp;
	for(i=start;i<end;i++){
		if(arr[i]<pivot){
			temp=arr[pindex];
			arr[pindex]=arr[i];
			arr[i]=temp;
			pindex++;	
			
		}
	}
	temp=arr[pindex];
	arr[pindex]=arr[end];
	arr[end]=temp;
	return pindex;
}
int main(){
	int arr[10]={30,4998,567,56,999,67,987,47,38,55},i;
	
		printf("Before sorting\n");
	for(i=0;i<10;i++){
		printf("%d ", arr[i]);
	}
		quicksort(arr,0,9);

	printf("\nAfter sorting\n");
	for(i=0;i<10;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
