#include <stdio.h>
int main()
{
	int arr[3] = {1,2,3};
	printf("%p\n",arr);
	int *ptr = arr;
	printf("%p\n",ptr+56784);
}		
