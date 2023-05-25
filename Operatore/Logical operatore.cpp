//Logical operatore

#include<stdio.h>
int main(){
	int a,b,result1,result2,result3;
	a=6,b=10;
	
	result1=(a>b && a<b);//AND
	result2=(a>b || a<b);//OR
	result3=!(a>b);//NOT
	
	
	printf("The result1 is %d\n",result1);
	printf("The result2 is %d\n",result2);
	printf("The result3 is %d\n",result3);
	
	
	return 0;
}
