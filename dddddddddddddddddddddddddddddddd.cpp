#include <stdio.h>
#include <string.h>

struct person
{
	int age;
	char name[50];
};

int main()
{
	struct person p1,p2;
	
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d",&p1.age);
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s",p1.name);
	
	p2.age = p1.age + 3;
	strcat(strcpy(p2.name,p1.name),"�� ��");
	
	printf("%s�� ���̴� %d���Դϴ�.\n%s�� ���̴� %d�Դϴ�.\n",p1.name,p1.age,p2.name,p2.age);
	
	return 0;
}
