#include<stdio.h>
int main(){
	int num,first=0,second=1,result,i;
	printf("Enter a number start to end number\n ");
	scanf("%d",&num);
	printf("Fibonacci series are\n");
	for(i=0;i<num;i++){
		if(i<=1){
		result=i;
		
		}
		
		else
		{
		
		result=first+second;
		first=second;
		second=result;
	}
	
		printf("%d ",result);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
