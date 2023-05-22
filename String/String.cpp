#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main(){
	char s[50];
	printf("Enter your name: ");
	scanf("%49[^\n]",s);
	
	printf("You name is : %s",s);

	
	return 0;
}
