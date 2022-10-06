#include <stdio.h>
int main()
{
	int n=0,i=0,ddt=0,c=0;
	int a[10] = {0,};
	int *ai=a;
	for(int h=-1;h<9;h++)
	{
		ddt++;
		scanf("%d",&c);
			if(c%2 == 0)
			{
				i++;
			}
			else if(c%2 == 1)
			{
				n++;
			}	
			*(ai+(ddt-1))=c;
	}
	printf("odd : %d\neven : %d",n,i);
	return 0;
}
