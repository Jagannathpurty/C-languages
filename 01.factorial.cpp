#include<stdio.h>
int main(){
	int fact,i,num;
	printf("Enter a number\n");
	scanf("%d",&num);
	fact=1;
	for(i=1;i<=num;i++){
		
		fact=fact*i;
	}
	printf("The factorial is=%d",fact);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
