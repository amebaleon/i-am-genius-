#include <stdio.h>
int main()
{
	int a,b;
	int *ap=&a,*bp=&b;
	scanf("%d %d",ap,bp);
	printf("*ap(%d) * 10 = %d\n",*ap,*ap*10);
	printf("*bp(%d) / 2 = %d",*bp,*bp/2);
	return 0;
}
