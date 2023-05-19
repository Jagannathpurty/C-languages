//All the data type size

#include<stdio.h>
int main(){
	int size_of_int=sizeof(int);
	int size_of_char=sizeof(char);
	int size_of_float=sizeof(float);
	int size_of_double=sizeof(double);
	//prinf all the data type size
	printf("The size of integer data type is: %d\n",size_of_int);
	printf("The size of charcater data type is: %d\n",size_of_char);
	printf("The size of flaot data type is: %d\n",size_of_float);
	printf("The size of double data type is: %d",size_of_double);
	
	return 0;
}
