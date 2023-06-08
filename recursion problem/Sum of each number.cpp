#include<stdio.h>
int sumOfdigit(int);
int main(){
	int num1,sum;
	printf("Enter range of sum:");
	scanf("%d",&num1);
	
	sum=sumOfdigit(num1);
	printf("The number of sum are: %d",sum);
	
	return 0;
}

int sumOfdigit(int z){
	if(z==0){
		return z;
	}
	else{
		return z+sumOfdigit(z-1);
	}
}
