#include <stdio.h>
#include<string.h>

struct student
{
	char group;
	char name[10];
	double cScore;
	int grade;
};

int main()
{
	struct student s1,s2;
	s1.group ='A';
	strcpy(s1.name,"�ڵ���");
	s1.cScore = 95.75;
	s1.grade = 1;
	
	printf("�Ҽ� : %c\n",s1.group);
	printf("�̸� : %s\n",s1.name);
	printf("c��� ���� : %.2f��\n",s1.cScore);
	printf("��� : %d���\n",s2.grade);
	printf("====================================\n");
	
	s2.group = s1.group + 1;
	strcpy(s2.name,"ȫ�浿");
	s2.cScore = 81.16;
	s2.grade = 2;
	
	printf("�Ҽ� : %c\n", s2.group);
	printf("�̸� : %s\n" , s2.name);
	printf("c��� ���� : %.2f��\n",s2.cScore);
	printf("��� : %d���\n",s2.grade);
	printf("====================================\n");
	
	return 0;
}
