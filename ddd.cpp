#include <stdio.h>
<<<<<<< HEAD

int main()
{
	int i = 10;
	int *ip = &i;
	
	printf("포인터로 i값 출력: %d \n", *ip);
	printf("변수명으로 i값 출력: %d \n", i);
	
	return 0;
}
=======
#include <string.h>
#include <ctype.h>
#define ALPHA 26
int main()
{
	int i, idx,alpha[ALPHA] = { 0 };
	int*ip = alpha;
	char cary[100];
	printf("Type a word :");
	scanf("%s",cary);
	for (i = 0; i<strlen(cary); i++)
	{
		if (isalpha(cary[i]))
		{
			idx = cary[i] < 97? cary[i] - 65 : cary[1] - 97;
			ip[idx]++;
		}
	}
	for(i = 0; i<ALPHA; i++)
	if(ip[i])
	printf("%c,%c = %d\n", i + 65,i+97,ip[i]);
	printf("sizeof(alpha)=%d,sizeof(ip) = %d\n",sizeof(alpha),sizeof(ip));
	return 0;
}

>>>>>>> e103d580588d7f74c41de3e28ed165c05641a835
