#include <stdio.h>
#include <string.h>
int main()
{
	int i, num, iary[4] = {1,2,0,0};
	char cary[20],*sp;
	int *ip = iary;
	printf("���� 1���� ���ڿ� 1�� �Է�:");
	scanf("%d%s",&num, cary);
	for (i = 0; i<2; i++){
		*(ip + 2 + i) =*(ip + i) + num;
		printf("%d,%d\n",*(ip+i), *(ip + 2 +i));
	}
	sp = strchr(cary, 'p');
	if(sp !=NULL)
	printf("���ĺ�'p'�� %d��°�ڸ��� ����.\n",sp - cary +1);
	else
	printf("���ĺ�'p'�� %s�� ����.\n",cary);
	return 0;
}
