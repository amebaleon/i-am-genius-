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
		printf("�Ҽ��� �Է��ϼ��� : ");
		scanf("%c",&List[i].group);
		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s",List[ik].cScore);
		printf("������ �Է��ϼ��� : ");
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
		printf("�Ҽ� : %c, �̸� : %s,���� : %.2f,��� : %d\n\n",List[i].group)
	}
}
