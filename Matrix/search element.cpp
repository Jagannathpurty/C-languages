#include<stdio.h>
int main(){
	int a[3][3],i,j,key,found=0;
	
	printf("Enter the matrix element\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the a[%d][%d] location matrix value: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter the search element tha we want to want:\n");
	scanf("%d",&key);
	
		
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(key==a[i][j]){
				found=1;
				break;
			}
		}
	}
	
	if(found==1){
		printf("Key found succesfully!");
	}
	else{
		printf("Key is not found");
	}
	
	return 0;
}
