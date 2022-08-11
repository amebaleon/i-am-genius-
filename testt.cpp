#include <stdio.h>
int main()
{
	int ia = 3, ib = 4;
	int *ap,*bp;
	ap = &ia, bp = &ib;
	printf("변수이름(ia)을 이용하여 ia 직접접근 = %d\n",ia);
	printf("변수이름(ib)을 이용하여 ib 직접접근 = %d\n",ib);
	printf("ia의 주소 = %p, ib의 주소 = %p\n",&ia,&ib);
	printf("ap 포인터 변수를 이용하여 ia 간접 접근 = %d\n", *ap);
	printf("bp 포인터 변수를 이용하여 ib 간접 접근 = %d\n", *bp);
	printf("ap의 값 = %p,bp의 값 =%p\n",ap, bp);
	printf("ap의 크기 = %d,bp의 크기 =%d\n", sizeof(ap), sizeof(bp));
	return 0;
}
