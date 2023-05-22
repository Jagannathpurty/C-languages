#include<stdio.h>
int main(){
	int i=0,num,count=0;
	printf("Enter an any number\n");
	scanf("%d",&num);
	
		for(i=2;i<=num/2;i++){
			if(num%i==0){
				count=1;
				break;
			}
			
		}
			if(count==1){
			printf("The number is not a prime number");
		}
		else{
			printf("The number is  a prime number");
		}
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
