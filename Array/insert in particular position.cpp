#include<stdio.h>
int main(){
	int i,ele,size,pos;
	int arr[10];
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	//position element which location we want to store the data
	printf("Enter the position element");
	scanf("%d",&pos);
	//Which element we want store in a particular position
	printf("Enter the insert element is: ");
	scanf("%d",&ele);
	//Enter the array element
	for(i=0;i<size;i++){
		printf("Enter the %d index value: ",i);
		scanf("%d",&arr[i]);
	}
	
	//At first shifting
	
	for(i=size;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=ele;
	size++;
//After inserting
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
		
	
	return 0;
}
