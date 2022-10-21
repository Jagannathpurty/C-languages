#include<stdio.h>
int Fibonacci(int);
int main(){
	int i,n;
	printf("Enter a number we want to a series\n");
	scanf("%d",&n);
	printf("The Fibonacci series is\n");
	for(i=0;i<n;i++){
		printf("%d ",Fibonacci(i));
	}
}
	int Fibonacci(int i){
		if(i==0){
			return 0;
			
		}
		else if(i==1){
			return 1;
		}
		else{
			return (Fibonacci(i-1)+Fibonacci(i-2));
		}
			
		
	}
	

