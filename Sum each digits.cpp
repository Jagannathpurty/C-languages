#include<stdio.h>
int Sumdigits(int);

int Sumdigits(int sum){
	int sum=0,rem;
	sum=sum+(num%10);
	rem=num/10;
	if(rem>0){
	Sumdigits(rem);
	}
	return sum;
	
}
int main(){
int i,num;
printf("Enter a number=");
scanf("%d",&num);
printf("The sumdigits is",Sumdigits(sum));
	
	return 0;
}
