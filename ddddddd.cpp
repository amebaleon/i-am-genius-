#include <stdio.h>

int main()
{
	int arr[5] = {0,};
	int *p;
	p=arr;
	scanf("%d %d %d %d %d",&p[0],&p[1],&p[2],&p[3],&p[4]);
		printf("%d",p[0]);
		printf("%d",p[1]);
		printf("%d",p[2]);
		printf("%d",p[3]);
		printf("%d",p[4]);

}
