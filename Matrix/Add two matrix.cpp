#include<stdio.h>
int main(){
	int a[3][3],b[3][3],c[3][3],i,j;
	
	printf("Enter the value for A matrix\n");
	//Mtrix A
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter a[%d][%d] location value: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Matrix B
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter b[%d][%d] location value: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
//Add two matrix
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	
  //print the matrix value
  printf("After the addition of matrix a and matrix b\n");
  	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ",c[i][j]);
		}
		
			printf("\n");
	}
  
	
	return 0;
}
