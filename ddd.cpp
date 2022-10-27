#include <stdio.h>

int main()
{
	int i = 10;
	int *ip = &i;
	
	printf("포인터로 i값 출력: %d \n", *ip);
	printf("변수명으로 i값 출력: %d \n", i);
	
	return 0;
}
