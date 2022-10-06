#include <stdio.h>
#include <string.h>

struct person
{
	char a[50];
	int grade;
	char name[50];
};

int main()
{
	struct person p1;
	
	scanf("%s %s %d",&p1.name,&p1.a,&p1.grade);
	printf("Name : %s\nSchool : %s\nGrade : %d\n",p1.name , p1.a , p1.grade);
	return 0;
}
