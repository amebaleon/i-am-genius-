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
	struct person p1,p2;
	
	printf("이름를 입력하세요 : ");
	scanf("%s",&p1.name);
	printf(" 점수를 입력하세요: ");
	scanf("%d %d",&p1.a,&p1.b);
	printf("이름를 입력하세요 : ");
	scanf("%s",&p2.name);
	printf(" 점수를 입력하세요: ");
	scanf("%d %d",&p2.a,&p2.b);
	
	printf("%s %d %d\n%s %d %d\n국어 평균 : %d\n영어 평균 : %d\n",p1.name,p1.a,p1.b,p2.name,p2.a,p2.b,(p1.a+p2.a)/2,(p1.b+p2.b)/2);
	
	return 0;
}
