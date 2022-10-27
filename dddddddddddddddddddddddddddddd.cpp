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
	strcpy(s1.name,"코딩봇");
	s1.cScore = 95.75;
	s1.grade = 1;
	
	printf("소속 : %c\n",s1.group);
	printf("이름 : %s\n",s1.name);
	printf("c언어 점수 : %.2f점\n",s1.cScore);
	printf("평균 : %d등급\n",s2.grade);
	printf("====================================\n");
	
	s2.group = s1.group + 1;
	strcpy(s2.name,"홍길동");
	s2.cScore = 81.16;
	s2.grade = 2;
	
	printf("소속 : %c\n", s2.group);
	printf("이름 : %s\n" , s2.name);
	printf("c언어 점수 : %.2f점\n",s2.cScore);
	printf("평균 : %d등급\n",s2.grade);
	printf("====================================\n");
	
	return 0;
}
