//Data type

#include<stdio.h>
int main(){
	int a,b,c;
	float d,e,f;
	double _a,_b,_c;
	char _d,_e,_f;
	
	a=5,b=5,c=a+b;//integer
	d=5.6,e=5.7,f=d+e;//float
	_a=56.89,_b=89.65,_c=_a+_b;//double
	_d='A',_e='B',_f=_d +_e;//characters
	int val=40;
	void *ptr=&val;
	
	printf("The number of integer sum is= %d\n",c);
	printf("The number of float sum is= %f\n",f);
	printf("The number of double sum is= %lf\n",_a);
	printf("The number of character sum is= %c\n",_f);
	printf("%d\n", *(int*)ptr);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
