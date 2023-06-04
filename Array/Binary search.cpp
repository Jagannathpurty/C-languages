#include<stdio.h>
int main(){
	int size,key,mid,i;
	int arr[10];
	printf("Enter the size of an array (MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the key element: ");
	scanf("%d",&key);
	
	for(i=0;i<size;i++){
		printf("Enter the %d index value: ",i);
		scanf("%d",&arr[i]);
	}
	int low,high;
	printf("Enter the lower value: ");
	scanf("%d",&low);
	printf("Enter the higher value: ");
	scanf("%d",&high);
	int found=0;
		
	while(low < high){
		mid=(low+high)/2;
		
		if(arr[mid]==key){
			found=1;
			break;
		
		}
		else if(key<arr[mid]){
			high=mid-1;
		}
	else{
			low=mid+1;
		}
	}
	
	if(found==1){
		printf("Key is found succesfully!");
	}
	else{
		printf("Key is not found!");
	}

	return 0;
}
