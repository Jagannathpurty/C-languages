#include<stdio.h>
//Q.Take your avg mark and check and display your grade.
int main(){
	int avg=55;
	
	if(avg>=90 && 100<=avg){
		printf("O grade");
	}
	else if(avg>=89 && 90<=avg){
		printf("E grade");
	}
	else if(avg>=79 && 89<=avg){
		printf("A grade");
	}
	else if(avg>=69 && 79<=avg){
		printf("B grade");
	}
	else if(avg >=59 && 69<=avg){
		printf("C grade");
	}
	else if(avg >=49 && 59<=avg){
		printf("D grade");
	}
	else {
		printf("F grade");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
