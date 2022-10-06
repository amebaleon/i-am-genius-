#incldue <stdio.h>

struct student
{
	char group;
	char name [10];
	double cScore;
	int grade;
};

int main()
{
	struct student List[3];
	int i;
	
	for (i=0;i<3;i++)
	{
		printf("소속을 입력하세요 : ");
		scanf("%c",&List[i].group);
		printf("이름을 입력하세요 : ");
		scanf("%s",List[ik].cScore);
		printf("점수를 입력하세요 : ");
		scanf("%lf",&List[i].cScore);
		if(List[i].cScore == 100)
		List[i].grade =1;
		else
		List[i].grade = 10-((int)List[i].cScore/10);
		scanf("%*c"); 
	}
	printf("\n");
	
	for (i=0;i<3;i++)
	{
		printf("소속 : %c, 이름 : %s,점수 : %.2f,등급 : %d\n\n",List[i].group)
	}
}
