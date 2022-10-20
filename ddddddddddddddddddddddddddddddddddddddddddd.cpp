#include <stdio.h>
#include <string.h>

struct pein
{
	char name[50];
	char num[50];
	char where[50];
};
int main()
{
	struct pein a1,a2,a3;
	int min=9999,de;
	scanf("%s %s %s",a1.name,a1.num,a1.where);
	if(a1.name[0]<min)
	{
		min = a1.name[0];
		de = 1;
	}
	
	scanf("%s %s %s",a2.name,a2.num,a2.where);
	if(a2.name[0]<min)
	{
		min = a2.name[0];
		de = 2;
	}
	scanf("%s %s %s",a3.name,a3.num,a3.where);
	if(a3.name[0]<min)
	{
		min = a3.name[0];
		de = 3;
	}
	if(de==1)
	{
	printf("name : %s\ntel : %s\naddr : %s",a1.name,a1.num,a1.where);
	}
	else if(de==2)
	{
	printf("name : %s\ntel : %s\naddr : %s",a2.name,a2.num,a2.where);
	}
	else if(de==3)
	{
	printf("name : %s\ntel : %s\naddr : %s",a3.name,a3.num,a3.where);
	}
}
