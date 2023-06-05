#include<stdio.h>
int number(int);
int main(){
	int num;
	printf("Enter the initial number\n");
	scanf("%d",&num);
	number(num);
	
	return 0;
	

}
int number(int num){
	if(num==51){
		return num;
	}
	else{
		printf("%d ",num);
		return number(num+1);
	}
}
