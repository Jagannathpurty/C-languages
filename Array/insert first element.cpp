#include<stdio.h>
int main(){
	int i,ele,size;
	int arr[10];
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the inser element is: ");
	scanf("%d",&ele);
	for(i=0;i<size;i++){
		printf("Enter the %d index value: ",i);
		scanf("%d",&arr[i]);
	}
	
	//At first shifting
	for(i=size;i>=0;i--){
		arr[i+1]=arr[i];
	}
	arr[0]=ele;
	size++;
//After inserting
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
		
	
	return 0;
}
