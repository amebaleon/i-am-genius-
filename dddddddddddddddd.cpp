#include <stdio.h>
int main()
{
	int arr;
	int*ptr;
	ptr=&arr;
		scanf("%d",ptr);
	printf("%p %d\n",ptr,*ptr);
}		
