#include<stdio.h>
int main(){
	int arr[5]={2,45,6,7,100};
	int i,max=arr[0];
	
	for(i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("The max is =%d",max);
	
	
	return 0;
}
