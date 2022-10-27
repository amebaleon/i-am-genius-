#include <stdio.h>
int main()
{
	int a , b
	int *ap = &a, *bp = &b;
	
	scanf("%d %d",&a, &b);
	
	printf("두정수의 값 : %d, %d\n", *ap, *ap);
	printf("두 정수의 합 : %d\n",*ap + *bp);
	printf("두 정수의 평균 : %.2f\n",(*ap + *bp)/2.0);
	
	return 0;
}
