#include<stdio.h>
int main(){
	int a[5],b[5],c[10],i,j;
	printf("Enter the element an array a\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element an array b\n");
	for(j=0;j<5;j++){
			scanf("%d",&b[j]);
		
	}
	//merge two array
int k=0;
	for(i=0;i<5;i++){
		c[k]=a[i];
		k++;
	}
	for(j=0;j<5;j++){
		c[k]=b[j];
		k++;
		
	}
	printf("After merging\n");
	for(k=0;k<10;k++){
		printf("%d ",c[k]);
	}
	
	return 0;
}
