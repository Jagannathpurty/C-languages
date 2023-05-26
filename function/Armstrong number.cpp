#include<stdio.h>
#include<math.h>
void armstrong();

void armstrong(){
	int result=0,digits=0,temp,num;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(temp !=0){
		digits=temp%10;
		result=result+pow(digits,3);
		temp=temp/10;
	}
	
	if(result==num){
		printf("The number is armstrong number");
	}
	else{
		printf("The number is not armstrong number");
	}
}
int main(){
	
	armstrong();
	
	return 0;
}
