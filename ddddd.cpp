#include <stdio.h>
int main ()
{
	char ca='a';
	char cb='b';
	char*cap = &ca;
	char*cbp=&cb;
	scanf("%c %c",&ca,&cb);
	if(*cap==*cbp)
	{
		printf("�Է��� �ι��ڰ� �����ϴ�.");
	}
	else
	{
		printf("�Է��� �ι��ڰ� �ٸ��ϴ�.");
	}
}
