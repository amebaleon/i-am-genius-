#include <stdio.h>

int main()
{
	int arr[3] = {0,};
	int *p;
	p=arr;
	scanf("%d %d",&p[0],&p[1]);
		printf("%d + %d = %d",p[0],p[1],p[0]+p[1]);
}
