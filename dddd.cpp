#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int a , b
	int *ap = &a, *bp = &b;
	
	scanf("%d %d",&a, &b);
	
	printf("�������� �� : %d, %d\n", *ap, *ap);
	printf("�� ������ �� : %d\n",*ap + *bp);
	printf("�� ������ ��� : %.2f\n",(*ap + *bp)/2.0);
	
	return 0;
=======
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	printf("%p\n",&arr[0]);
	printf("%p",arr);
>>>>>>> e103d580588d7f74c41de3e28ed165c05641a835
}
