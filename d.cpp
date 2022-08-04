#include <stdio.h>
int main()
{
	int a=0,b=0;
	int c[50] = {1,2,3,};
	for(int d = 1;d<50;d++)
	{
		c[d] = c[d/2+1] + c[d];
		printf("%d \n",c[d]);
	}
}
