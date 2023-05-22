#include<stdio.h>
int main(){
	int i,num,j=2,count=0;
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

	}
	j++;
		
	}
	
	return 0;
}
