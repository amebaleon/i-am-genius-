#include <stdio.h>
int main()
{
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

