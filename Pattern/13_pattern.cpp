#include<stdio.h>
int main(){
	int i,j;
	
	for(i=1;i<=3;i++){
		for(j=1;j<=5;j++){
			if(i==1){
				printf("V");
			}
			else if(i==1 && j==5 || i==2 && j==4){
				printf("V");
			}
			else if(i==j){
				printf("V");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
