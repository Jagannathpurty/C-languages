#include<stdio.h>
int main(){
	int num1,num2,i,j,count=0;
	printf("Enter the num1 amd num2 values: ");
	scanf("%d %d",&num1,&num2);
	
	for(j=num1;j<=num2;j++){
		count=0;
		
		for(i=2;i<=j/2;i++){
			if(j%i==0){
				count++;
				break;
			}
			
			
		}
		
			if(count==0 && j!=1){
			printf("%d ",j);
			
		}
		
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
