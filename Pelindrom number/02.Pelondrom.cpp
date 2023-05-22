#include<stdio.h>
int main(){
	int num,temp,reverse=0;
	printf("Enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		reverse=reverse*10+(temp%10);
		temp=temp/10;
	}
	if(num==reverse){
		printf("Number is pelindrom");
	}
	else{
		printf("Number is not a pelindrom");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
