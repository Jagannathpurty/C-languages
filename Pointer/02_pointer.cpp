#include<stdio.h>
int main(){
	int myAge=30;
	int* ptr=&myAge;
	
	printf("%d\n",myAge);
	printf("%p\n",&myAge);
	printf("%p\n",ptr);
	printf("%d",*ptr);
	
	
	return 0;
}
