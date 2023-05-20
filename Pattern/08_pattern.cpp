#include<stdio.h>
int main()
{
	
int i,j;
for(i=1;i<=4;i++){
	for(j=1;j<=5;j++){
		if(i%2==0){
			printf("*\t");
		}
		else if(i%2!=0){
			printf("1\t");
		}
	}
	printf("\n");
}	
	
	
	
	
	
	
	
	
	return 0;
}
