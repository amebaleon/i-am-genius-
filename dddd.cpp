#include <stdio.h>
int main()
{
	int a , b
	int *ap = &a, *bp = &b;
	
	scanf("%d %d",&a, &b);
	
	printf("�������� �� : %d, %d\n", *ap, *ap);
	printf("�� ������ �� : %d\n",*ap + *bp);
	printf("�� ������ ��� : %.2f\n",(*ap + *bp)/2.0);
	
	return 0;
}
