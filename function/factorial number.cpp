#include<stdio.h>
void fact();

void fact(int num){
	int i,fact;
	fact=1;
	
	for(i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("The factorial  number is %d",fact);
	
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	fact(num);
	return 0;
}
