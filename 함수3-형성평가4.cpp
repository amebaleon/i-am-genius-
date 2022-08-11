#include <stdio.h>
int un(int a,int c,int d,int b[]);
int ma(int b[],int d,int c);
int main()
{
	int a,c,d=1;
	int b[200] = {1,2,0,}; 
	scanf("%d",&a);
	c=a;
	printf("%d",un(a,c,d,b));
}
int un(int a,int c,int d,int b[])
{
	if(a==1)
	{
		return 1;
	}
	else if(a==2)
	{
		return 2;
	}
	else if(c>0)
	{
		return ma(b,d,c);
	}
}
int ma(int b[],int d,int c)
{
	c--;
	d++;
	b[d]=(b[d-1]*b[d-2])%100;
	if(c>0)
	{
	return ma(b,d,c);
}
else if(c<=0)
{
	return b[d-2];
}
}
