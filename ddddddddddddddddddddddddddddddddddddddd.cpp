#include <stdio.h>

struct abc{
	char name[21];
	int korean;
	int english;
};
int main()
{
	struct abc p1,p2,p3;
	scanf("%s %d %d",&p1.name,&p1.korean,&p1.english);
	scanf("%s %d %d",&p2.name,&p2.korean,&p2.english);
	printf("%s %d %d\n%s %d %d\navg %d %d",p1.name,p1.korean,p1.english,p2.name,p2.korean,p2.english,(p1.korean+p2.korean)/2,(p1.english+p2.english)/2);
}
