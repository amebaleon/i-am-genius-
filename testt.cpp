#include <stdio.h>
int main()
{
	int ia = 3, ib = 4;
	int *ap,*bp;
	ap = &ia, bp = &ib;
	printf("�����̸�(ia)�� �̿��Ͽ� ia �������� = %d\n",ia);
	printf("�����̸�(ib)�� �̿��Ͽ� ib �������� = %d\n",ib);
	printf("ia�� �ּ� = %p, ib�� �ּ� = %p\n",&ia,&ib);
	printf("ap ������ ������ �̿��Ͽ� ia ���� ���� = %d\n", *ap);
	printf("bp ������ ������ �̿��Ͽ� ib ���� ���� = %d\n", *bp);
	printf("ap�� �� = %p,bp�� �� =%p\n",ap, bp);
	printf("ap�� ũ�� = %d,bp�� ũ�� =%d\n", sizeof(ap), sizeof(bp));
	return 0;
}
