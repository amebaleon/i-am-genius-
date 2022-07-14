#include <stdio.h>
int main()
{
	int a,b=0,c;
	int d[1000] = {1,2,};
	for(a=1;a<998;a++)
	{
		b++;
		printf("%d,",(d[b]*d[b-1])%100);
		d[b+1] = d[b]*d[b-1]%100;
	}
}
