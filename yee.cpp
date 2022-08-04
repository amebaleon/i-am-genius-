#include <stdio.h>
int main()
{
	int a=0,b=1,c=0,d=1,g=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		if(i%2==1)
		{
			g++;
			c=c+i;
		}
		if(c>=a)
		{
			break;
		}
	}
	printf("%d %d",g,c);
}
