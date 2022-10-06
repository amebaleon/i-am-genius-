#include <stdio.h>
#include <string.h>

struct person
{
	int a;
	int b;
	char name[50];
};

int main()
{
	int a=1;
	struct person p1,p2,p3,p4,p5;
	
	printf("이름, 점수를 입력하세요 : ");
	scanf("%s %d",&p1.name,&p1.a);
	
	printf("이름, 점수를 입력하세요 : ");
	scanf("%s %d",&p2.name,&p2.a);
	
	if(p1.a<p2.a)
	{
		a = 2;
	}
	
	printf("이름, 점수를 입력하세요 : ");
	scanf("%s %d",&p3.name,&p3.a);
	
	if(a == 2)
	{
		if(p3.a<p2.a)
		{
			a = 2;
		}
		else if(p3.a>p2.a)
		{
			a = 3;
		}
	}
	else if(a == 1)
	{
		if(p3.a<p1.a)
		{
			a = 1;
		}
		else if(p3.a>p1.a)
		{
			a = 3;
		}
	}
	
	printf("이름, 점수를 입력하세요 : ");
	scanf("%s %d",&p4.name,&p4.a);
	
		if(a == 2)
	{
		if(p4.a<p2.a)
		{
			a = 2;
		}
		else if(p4.a>p2.a)
		{
			a = 4;
		}
	}
	else if(a == 1)
	{
		if(p4.a<p1.a)
		{
			a = 1;
		}
		else if(p4.a>p1.a)
		{
			a = 4;
		}
	}
	else if(a == 3)
	{
		if(p4.a<p3.a)
		{
			a = 3;
		}
		else if(p4.a>p3.a)
		{
			a = 4;
		}
	}	
	printf("이름, 점수를 입력하세요 : ");
	scanf("%s %d",&p5.name,&p5.a);
	
		if(a == 2)
	{
		if(p5.a<p2.a)
		{
			a = 2;
		}
		else if(p5.a>p2.a)
		{
			a = 5;
		}
	}
	else if(a == 1)
	{
		if(p5.a<p1.a)
		{
			a = 1;
		}
		else if(p5.a>p1.a)
		{
			a = 5;
		}
	}
	else if(a == 3)
	{
		if(p5.a<p3.a)
		{
			a = 3;
		}
		else if(p5.a>p3.a)
		{
			a = 5;
		}
	}
	else if(a == 4)
	{
		if(p5.a<p4.a)
		{
			a = 4;
		}
		else if(p5.a>p4.a)
		{
			a = 5;
		}
	}
	if(a==1)
	{
		printf("\n최고 점수 : %s %d",p1.name,p1.a);
	}
	else if(a==2)
	{
		printf("\n최고 점수 : %s %d",p2.name,p2.a);
	}
	else if(a==3)
	{
		printf("\n최고 점수 : %s %d",p3.name,p3.a);
	}
	else if(a==4)
	{
		printf("\n최고 점수 : %s %d",p4.name,p4.a);
	}
	else if(a==5)
	{
		printf("\n최고 점수 : %s %d",p5.name,p5.a);
	}
	return 0;
}
