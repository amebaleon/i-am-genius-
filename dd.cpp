#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int ia, ib;
	char ca = 'A';
	double da = 0.5,db;
	int *iap = &ia, *ibp =&ib, *ip;
	char *cap = &ca;
	double *dap = &da;
	ip = ibp;
	printf("���� 2���� �Է��ϼ��� : ");
	scanf("%d%d",iap,ibp);
	db = (double)*ip;
	printf("%d + %d  = %d\n", *iap, *ibp, *iap + *ip);
	printf("'A'�Ǽҹ��� = \'%c\'\n", (*cap)+32);
	printf("0.5 * %.1lf = %.1lf\n",db, *dap * db);
	return 0;
}

=======
	int a,b;
	int *ap=&a,*bp=&b;
	scanf("%d %d",ap,bp);
	printf("*ap(%d) * 10 = %d\n",*ap,*ap*10);
	printf("*bp(%d) / 2 = %d",*bp,*bp/2);
	return 0;
}
>>>>>>> e103d580588d7f74c41de3e28ed165c05641a835
