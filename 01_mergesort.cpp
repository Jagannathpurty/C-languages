#include<stdio.h>
#include<stdlib.h>
//prototype
void mergesort(int [],int,int);
void merge(int [],int,int,int);

//Body part()
void mergesort(int arr[],int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
void merge(int arr[],int start,int mid,int end){
	int temp[10];
	int i,j,k;
	i=start;
	j=mid+1;
	k=0;
	
	while(i<=mid && j<=end){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			i++;
			k++;
		}
			else{
				temp[k]=arr[j];
				j++;
				k++;
			
		}
	}
	//pending elements are
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end){
		temp[k]=arr[j];
		j++;
		k++;
}
k=0;
for(i=start;i<=end;i++){
	arr[i]=temp[k++];
}
}

int main(){
	int arr[10]={3,8,6,9,4,1,7,11,14,15},i;
	mergesort(arr,0,9);
	printf("After Sorting\n");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	
	return 0;
}
