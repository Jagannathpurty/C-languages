#include<stdio.h>
#include<string.h>
union student{
	int roll;
	char name[30];
	float mark;
	
};
int main(){
	
	union student s;
	s.roll=78;
	strcpy(s.name,"jagannath");
	s.mark=9.7;
	
	printf("%d %s %f",s.roll,s.name,s.mark);
	
	
	return 0;
}
