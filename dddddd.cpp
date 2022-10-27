#include <stdio.h>
<<<<<<< HEAD
struct lota{
	int X;
	int X2;
	int y;
	int y2;
};
int main(){
	struct lota lota [100];
	int a,b,c,d;
	scanf("%d %d %d %d",&lota[0].X,&lota[0].X2,&lota[0].y,&lota[0].y2);
	scanf("%d %d %d %d",&lota[1].X,&lota[1].X2,&lota[1].y,&lota[1].y2);
	if(lota[0].X>lota[1].X)
	{
		a = lota[1].X;
	}
	else
	{
		a = lota[0].X;
	}
	if(lota[0].X2>lota[1].X2)
	{
		b = lota[1].X2;
	}
	else
	{
		b = lota[0].X2;
	}
	if(lota[0].y<lota[1].y)
	{
		c = lota[1].y;
	}
	else
	{
		c = lota[0].y;
	}
	if(lota[0].y2<lota[1].y2)
	{
		d = lota[1].y2;
	}
	else
	{
		d = lota[0].y2;
	}
	printf("%d %d %d %d",a,b,c,d);
=======

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p;
	p = arr;
	
	for (int i = 0; i< 10; i++)
	printf("%d",p[i]);
	
	return 0;
>>>>>>> e103d580588d7f74c41de3e28ed165c05641a835
}
