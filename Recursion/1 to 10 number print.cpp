#include<stdio.h>
int number(int);

int number(int num){
	if(num==11){
		return num;
	}
	else{
		printf("%d ",num);
		number(num+1);
	}
}
int main(){
	int x;
	printf("Enter an initial number is:");
	scanf("%d",&x);
	number(x);
	
	return 0;
}
