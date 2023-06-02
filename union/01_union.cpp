#include<stdio.h>
#include<string.h>
union car{
	int a;
	char name[10];
	float b;
};
int main(){
union car s1;
s1.a=45;
strcpy(s1.name,"jaga");
s1.b=6.7;
printf("%d\n",s1.a);
printf("%s\n",s1.name);
printf("%f\n",s1.b);
	
	
	return 0;
}
