#include<stdio.h>
int main(){
	int i,j;
	for(i=5;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf("* ");
			
		}
		printf("\n");
	}
	
	
	return 0;
}
