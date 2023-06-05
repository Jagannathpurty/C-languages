#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j,key,found=0;
	
	printf("Enter the matrix A:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the a[%d][%d] location value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the matrix B:\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the b[%d][%d] location value:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Enter the search element that we want to search\n");
	scanf("%d",&key);
	
	
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		if(a[i][j]==key || b[i][j]==key){
			found=1;
			break;
		}
		}
	}
	
	if(found==1){
		printf("Key is found!");
	}
	else{
		printf("Key is not found!");
	}
	
	

	
	return 0;
}
