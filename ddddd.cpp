#include <stdio.h>
<<<<<<< HEAD
int main ()
{
	char ca='a';
	char cb='b';
	char*cap = &ca;
	char*cbp=&cb;
	scanf("%c %c",&ca,&cb);
	if(*cap==*cbp)
	{
		printf("입력한 두문자가 같습니다.");
	}
	else
	{
		printf("입력한 두문자가 다릅니다.");
=======

int main()
{
	int arr[5] = {1,2,3,4,5};
	int *p;
	p=arr;
	
	for (int i = 0;i < 5; i++){
		printf("arr[%d] = %d, p[%d] = %d",i,arr[i],i,p[i]);
		printf("\n");
	}
	
	for(int i = 0;i<5; i++)
	p[i]++;
	
	printf("\n\n포인터 변수 값 1씩 증가 후..\n\n");
	
	for(int i = 0; i < 5;i++){
	printf("arr[%d] = %d,p[%d] = %d",i,arr[i],i,p[i]);
	printf("\n");
>>>>>>> e103d580588d7f74c41de3e28ed165c05641a835
	}
}
