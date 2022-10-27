#include <stdio.h>
void sort(int *arr,int len);
void swap(int *arr,int a,int b);
int main()
{
	int y;
	int ui[30]= {0,0,0};
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
