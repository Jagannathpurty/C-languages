//Delete the last element

#include<stdio.h>
int main(){
	int arr[10];
	int i,size;
	
	printf("Enter the size of an array (MAX-10)\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
	printf("Enter the %d index element: ",i);
	
		scanf("%d",&arr[i]);
	}

size--;

printf("After deleting one new we will get\n");

	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
		
	return 0;
}
