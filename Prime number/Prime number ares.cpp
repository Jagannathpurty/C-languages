#include<stdio.h>
int main(){
	int num,count=0,j=2,i;
	printf("Enter a number\n");
	scanf("%d",&num);
	while(j<=num){
		count=0;
		i=2;
		while(i<=j/2){
			if(j%i==0){
				count++;
				break;
			}
			i++;
		}
		
		
			if(count==0 && j!=1){
		printf("%d ",j);
		j++;
		
	}
	
	}

	
	
	
	
	
	
	
	
	
	return 0;
}
