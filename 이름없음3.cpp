#include <stdio.h>
struct a{
	char a [100];
	char b [100];
	char c [100];
}; 
int main()
{
	
	struct a a1;
	scanf("%s %s %s",a1.a,a1.b,a1.c);
	printf("name : %s\n",a1.a);
	printf("tel : %s\n",a1.b);
	printf("addr : %s\n",a1.c);

}
