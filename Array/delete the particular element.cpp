//Delete the particular position element

#include<stdio.h>
int main(){
	int arr[10];
	int i,size,pos;
	
	printf("Enter the size of an array (MAX-10)\n");
	scanf("%d",&size);
	//Enter the position element which position we want to delete element
	printf("Enter the position element: ");
	scanf("%d",&pos);
	
	for(i=0;i<size;i++){
	printf("Enter the %d index element: ",i);
	
	scanf("%d",&arr[i]);
	}
	
	for(i=pos;i<size;i++){
		arr[i]=arr[i+1];	
	}

    size--;

printf("After deleting one new we will get\n");

	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
		
	return 0;
}
