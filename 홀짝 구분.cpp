#include <stdio.h>
int main()
{
	int n=0,i=0;
	int a[10] = {0,};
	int *ai=a;
	scanf("%d",&ai[0]);
	if(ai[0]%2 == 0)
	{
		i++;
	}
	else if(ai[0]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[1]);
		if(ai[1]%2 == 0)
	{
		i++;
	}
	else if(ai[1]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[2]);
		if(ai[2]%2 == 0)
	{
		i++;
	}
	else if(ai[2]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[3]);
		if(ai[3]%2 == 0)
	{
		i++;
	}
	else if(ai[3]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[4]);
		if(ai[4]%2 == 0)
	{
		i++;
	}
	else if(ai[4]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[5]);
		if(ai[5]%2 == 0)
	{
		i++;
	}
	else if(ai[5]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[6]);
		if(ai[6]%2 == 0)
	{
		i++;
	}
	else if(ai[6]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[7]);
		if(ai[7]%2 == 0)
	{
		i++;
	}
	else if(ai[7]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[8]);
		if(ai[8]%2 == 0)
	{
		i++;
	}
	else if(ai[8]%2 == 1)
	{
		n++;
	}
	scanf("%d",&ai[9]);
		if(ai[9]%2 == 0)
	{
		i++;
	}
	else if(ai[9]%2 == 1)
	{
		n++;
	}
	printf("odd : %d\neven : %d",n,i);
	return 0;
}
