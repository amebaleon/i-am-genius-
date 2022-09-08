#include <stdio.h>
int main()
{
double a[10000] = {0,};
int aa,ab,ac;
scanf("%d",&aa);
for(int i=0;i<aa;i++)
{
scanf("%lf",&a[i]);
}
for(int i=0;i<aa;i++)
{
printf("%.2lf ",a[i]);
}
for(ab=0;ab<aa;ab++)
{
 a[ab]=a[ab]+a[ab-1];
 if(ab+1==aa)
 {
 printf("\nhap : %.2lf\n",a[ab]);
 printf("avg : %.2lf",a[ab]/aa);
 }
}
}
