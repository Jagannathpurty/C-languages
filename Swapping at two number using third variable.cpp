#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter a first number=");
	scanf("%d",&a);
	printf("Enter a second number=");
	scanf("%d",&b);
	printf("Before swapping %d%d\n",a,b);
	//swap number
	temp=a;
	a=b;
	b=temp;
	printf("After swapping %d%d",a,b);
		



	return 0;
}
