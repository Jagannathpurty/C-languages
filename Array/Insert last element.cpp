#include<stdio.h>
int main(){
	int arr[10];
	int i,ele,size;
	
	printf("Enter the size of an array (MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the insert element: ");
	scanf("%d",&ele);
	for(i=0;i<size;i++){
		printf("Enter the %d index element: ",i);
		scanf("%d",&arr[i]);
	}
	arr[size]=ele;
	size++;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
