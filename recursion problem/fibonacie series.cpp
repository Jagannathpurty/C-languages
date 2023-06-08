#include<stdio.h>
int fib(int);
int main(){
	int num1;
	printf("Enter the last element: ");
	scanf("%d",&num1);
	for(int i=0;i<num1;i++){
	printf("%d ",fib(i));
		
	}

	return 0;
}

int fib(int num1){
	if(num1==0){
		return 0;
		
	}
	else if(num1==1){
		return 1;
	}
	else{
		return (fib(num1-1)+fib(num1-2));
	}
}
