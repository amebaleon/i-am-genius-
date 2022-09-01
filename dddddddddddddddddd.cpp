#include <stdio.h>
int main()
{
	int a1, a2;
	int *a = &a1;
	int *b = &a2;
	
	scanf("%d%d",a,b);
	printf("%d + %d = %d\n",*a,*b,*a + *b);
	printf("%d - %d = %d\n",*a,*b,*a - *b);
	printf("%d * %d = %d\n",*a,*b,*a * *b);
	printf("%d / %d = %d\n",*a,*b,*a / *b);
}		
