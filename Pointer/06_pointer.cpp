#include<stdio.h>
int main(){
	int myNumber[4]={30,67,89,30};
	int *ptr=myNumber;
	
	for(int i=0;i<4;i++){
		printf("%d\n",*(ptr+i));
	}
	

	return 0;
}
