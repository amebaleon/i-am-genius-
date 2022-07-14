#include <stdio.h>
void momster(int a);
int main()
{
	int a=0;
	scanf("%d",&a);
	momster(a);
}
void momster(int a)
{
	if(a==1||a==2){
	printf("%d",a);
	return;
}
else{
		momster(a-2);
printf("%d",a);
return;
}


}
