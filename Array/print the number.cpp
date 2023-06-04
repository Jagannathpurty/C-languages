#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE],i,n;
	printf("Enter the size of an array elements:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter the  %d index element: \n",i);
		scanf("%d",&arr[i]);
		
	
	}
	
	printf("After inserting the element are:\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	
	
	return 0;
}
