//call by refference

#include<stdio.h>

//void test(int*);
void test(int *a){
	

   *a=6;
printf("Inside the test function is a=%d\n",*a);
}
int main(){
	int a=60;
	printf("\nBefore calling test function is a=%d\n",a);
	
test(&a);
printf("After calling test function a=%d",a);
	
	
	
	
	return 0;
}
