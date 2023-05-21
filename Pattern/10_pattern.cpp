#include<stdio.h>
int main (){
	int i,j;
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if(i==0 || i==4){
				printf("%d",j);
			}
			else if(j==0 || j==4){
				printf("%d",j);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
