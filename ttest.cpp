#include <stdio.h>
int yee(int a,int b[],int aa,int c);
int main()
{
int a=0,aa=1,c=0;
int b[100] = {1,};
int bb;
scanf("%d",&a);
c=a;
yee(a,b,aa,c);
bb = yee(a,b,aa,c);
printf("%d",bb);
return 0;
}
int yee(int a,int b[],int aa,int c)
{
	if(a>0)
	{
		a--;
		aa++;
		b[aa] = b[(aa+1)/2] + b[aa];
		yee(a,b,aa,c);
}
	return b[c+1];
}
