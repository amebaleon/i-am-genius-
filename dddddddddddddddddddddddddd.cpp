#include <stdio.h>
int main()
{
	int a;
	double max=-9999,min=9999;
	double cha[100] = {0,};
	scanf("%d",&a);
for(int i=0;i<a;i++)
{
scanf("%lf",&cha[i]);
if(cha[i]>max)
{
	max=cha[i];
}
if(cha[i]<min)
{
	min=cha[i];
}
}
printf("\nmax : %.0lf",max);
printf("\nmin : %.0lf",min);

}
