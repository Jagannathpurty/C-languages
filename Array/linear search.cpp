#include<stdio.h>
int main(){	
int arr[10];
	int key,i,found=0,size;
	
	printf("Enter the size of an arra(MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the search element: ");
	scanf("%d",&key);
	for(i=0;i<size;i++){
		printf("Enter the %d index vlaue: ",i);
		scanf("%d",&arr[i]);
	}
	
	
	//serach the key element
	for(i=0;i<size;i++){
		if(arr[i]==key){
			found=1;
			break;
		}
		
	}
	
	if(found==1){
		printf("key is found");
	}
	
	else{
		printf("Key is not found");
	}
	

	return 0;
}
