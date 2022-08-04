#include <stdio.h>
int yee(int a);
int main()
{
int a=0,aa=0,c=0;
scanf("%d",&a);
printf("%d",yee(a));
}
int yee(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
	return yee(a/2) + yee(a-1);
}
}
