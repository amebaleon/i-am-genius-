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
		printf("입력한 두문자가 같습니다.");
	}
	else
	{
		printf("입력한 두문자가 다릅니다.");
	}
}
