#include <stdio.h>

struct spuare
{
	int x;
	int y;
	int width;
};

int main()
{
	struct spuare s;
	
	printf("�簢���� ���ο� ������ ���̸� �Է��ϼ���:");
	scanf("%d %d",&s.x,&s.y);
	
	s.width = s.x * s.y;
	printf("�簢���� ���̴� %d�Դϴ�.\n",s.width);
	
	return 0;
}
