//pelindrome
#include<stdio.h>
int main(){
	int num,reverse=0,temp;
	printf("Enter a number\n");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		reverse=reverse*10+temp%10;
		temp=temp/10;
	}
	if(reverse==num){
		printf("Enter number is pelindrome\n");
	}
	else{
		printf("Enter number is not a pelindrome");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
