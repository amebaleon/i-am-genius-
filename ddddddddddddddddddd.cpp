#include <stdio.h>
int main()
{
	int arr[5] = {0,};
	int *ptr = arr;
	scanf("%d",&ptr[0]);
	scanf("%d",&ptr[1]);
	scanf("%d",&ptr[2]);
	scanf("%d",&ptr[3]);
	scanf("%d",&ptr[4]);
	printf("%d %d %d\n",ptr[0],ptr[2],ptr[4]);
}		
