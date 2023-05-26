#include<stdio.h>
void pelindrom(); //prototype

void pelindrom(){
	int num,reverse=0,sum=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	
	while(temp !=0){
		sum=temp%10;
		reverse=reverse*10+sum;
		temp=temp/10;
		
	}
	
	if(num==reverse){
		printf("The number is pelindrom");
	}
	else{
		printf("The number is not a pelindrom");
	}
	
}
int main(){
	
	
	pelindrom();
	
	return 0;
}
