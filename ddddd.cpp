#include <stdio.h>

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
	}
}
