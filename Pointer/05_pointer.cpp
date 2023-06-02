#include<stdio.h>
int main(){
int number[10];
int *ptr=number;
for(int i=0;i<10;i++){
scanf("%d",&number[i]);	
}


for(int i=0;i<10;i++){
printf("%d\t",*(ptr+i));

}

	
	
	
	
	
	
	
	
	
	
	return 0;
}
