#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a first number=");
	scanf("%d",&a);
	printf("Enter a second number=");
	scanf("%d",&b);
		printf("Before interchanging is=%d%d\n",a,b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("After interchanging is=%d%d",a,b);
	
	
	return 0;
}
