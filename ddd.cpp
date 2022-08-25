#include <stdio.h>
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

