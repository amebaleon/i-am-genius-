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
		printf("�Է��� �ι��ڰ� �����ϴ�.");
	}
	else
	{
		printf("�Է��� �ι��ڰ� �ٸ��ϴ�.");
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
	
	printf("\n\n������ ���� �� 1�� ���� ��..\n\n");
	
	for(int i = 0; i < 5;i++){
	printf("arr[%d] = %d,p[%d] = %d",i,arr[i],i,p[i]);
	printf("\n");
>>>>>>> e103d580588d7f74c41de3e28ed165c05641a835
	}
}
