#include<stdio.h>
#include<math.h>
int main(){
	//Question x=b*b+4*a*c
	
	int a,b,c,results;
	a=7,b=8,c=4;
	results=pow(b,2)+4*a*c;
	printf("The solution is: %d",results);
	
	return 0;
}
