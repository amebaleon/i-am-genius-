#include <stdio.h>
int main(){
	int a=0,b=0,c,d,e,f,g;
	scanf("%d",&a);
	while(1)
	{
		if(a>1)
		{
			if(a%2==0)
			{
				a=a/2;
				b++;
			}
			else
			{
				a=a/3;
				b++;
			}
			
		}
		else
		{
			break;
		}
	}
	printf("%d",b);
	return 0;
}
