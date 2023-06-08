#include<stdio.h>
int fact(int);
int main(){
	int n,r,ncr;
	
	printf("Enter the n and r values are:\n");
	scanf("%d %d",&n,&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("The factorial is: %d",ncr);
	

	return 0;
}


int fact(int z){
	if(z==0){
		return 1;
	}
	else{
		return z*fact(z-1);
	}
}
