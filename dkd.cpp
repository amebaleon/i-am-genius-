#include <stdio.h>
struct name {
	char studentname [101];
	int t;
	int tt;
	int ttt;
	int tttt;
};
int main()
{
	struct name student[101];
	int a;
	for(int i = 0;i < a;i++;)
	{
	scanf("%s",&student[i].studentname);
	scanf("%d",&student[i].t);
	scanf("%d",&student[i].tt);
	scanf("%d",&student[i].ttt);
	student[i].tttt = student[i].t+student[i].tt+student[i].ttt;
	}
	
}
