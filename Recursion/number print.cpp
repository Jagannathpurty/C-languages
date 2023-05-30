#include<stdio.h>
int func(int);

int func(int num){
	if(num==0){
		return num;
	}
	else{
		printf("%d ",num);
		return func(num-1);
	}
}
int main(){
	
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	func(num);
	
	return 0;
}
