#include<stdio.h>
int  main(){
	int myAge=30;
	int* ptr=&myAge;
	
	printf("%d\n",ptr);
	printf("%d",*ptr);
	
	
	return 0;
}
