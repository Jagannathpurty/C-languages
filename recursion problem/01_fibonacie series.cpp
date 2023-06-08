#include<stdio.h>
int main(){
	int first=0,second=1,i,num,result;
	printf("Enter the range of number: ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		if(i<=1){
			result=i;
		}
		else{
			result=first+second;
			first=second;
			second=result;
		}
		
			printf("%d ",result);
	}


	
	
	
	
	
	
	
	
	
	
	return 0;
}
