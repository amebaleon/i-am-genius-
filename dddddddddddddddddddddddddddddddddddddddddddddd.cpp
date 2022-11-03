#include <stdio.h>
struct ui{
	char a [100];
	int b;
	int c;
}; 
int main()
{
	
	struct ui [100];
	int iv;

		int y;
	int ui[100];
	int *u=ui;
	int jb;
	scanf("%d ",&jb);
	for(y=0;y<jb;y++)
	{
		scanf("%d",(u+y));
	}
			sort(u,jb);
			for(int t=0;t<jb;t++)
			{
			printf("%d ",u[t]);
}
}
void swap(int *arr,int a,int b)
{
	int tmp =arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
	return;
}
void sort(int *arr,int len)
{
for(int i=0;i < len;i++)
{
	for(int j=0;j < len - 1;j++)
	{
		if(*(arr+j)<*(arr+j+1))
		{
			swap(arr,j,j+1);
		}
	}
}
}

}
