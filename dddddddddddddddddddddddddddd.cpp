#include<stdio.h>
#include<string.h>

int main()
{
	char *ary[3]={"one","two","three"};
	int i,j,cnum;
	char **dp=ary;
	
	for(i=0;i<3;i++)
	{
			for(j=0; j<strlen(ary[i]);j++)
			{
				printf("%c",*(*(dp+i)+j));
			}
			printf("\n");
	}
}
