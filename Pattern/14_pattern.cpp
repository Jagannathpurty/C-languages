#include<stdio.h>
int main(){
	
	int i,j;
	for(i=1;i<=5;i++)
	{	
		for(j=1;j<=5;j++){
			if(i==1 || i==3 || i==5){
				printf("E");
			}
			else if(j==1){
				printf("E");
			}
			else {
				printf(" ");
			}
			
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
