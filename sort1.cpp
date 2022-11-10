#include <stdio.h>
void sort(int *arr,int len);
void swap(int *arr,int a,int b);
	struct name {
	char studentname [101];
	int t;
	int tt;
	int ttt;
	int tttt;
};
int main()
{
	int y;
	int ui[30]= {0,0,0};
	int *u=ui;
	int jb;
	struct name student[101];
	int a;
	int ig;
	scanf("%d ",&jb);

	
	for(int i = 0;i < jb;i++)
	{
	scanf("%s",&student[i].studentname);
	scanf("%d",&student[i].t);
	scanf("%d",&student[i].tt);
	scanf("%d",&student[i].ttt);
	student[i].tttt = student[i].t+student[i].tt+student[i].ttt;
	}
			sort(student[ig].tttt,jb);
			for(int t=0;t<jb;t++)
			{
			printf("%d ",u[t]);
}
}
void swap(int arr,int a,int b)
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
