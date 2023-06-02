#include<stdio.h>
int main(){
	int myNumber[4]={45,56,58,89};
	
	for(int i=0;i<4;i++){
		printf("%p\n",&myNumber);
	}
	
	printf("%p\n",myNumber);
	//print the first element of the array
	printf("%d\n",*myNumber);
	
	printf("%d\n",*(myNumber+1));
		printf("%d\n",*(myNumber+2));
	return 0;
}
