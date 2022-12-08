#include <stdio.h>
#include <windows.h>
#include <string.h>
void mapprint(int data[3][3]);
int main()
{
	int map[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	char input_str[100000];
	int width;
	int length;
	int count=0;
	printf("'가로 세로' 형태로 입력\n이해했다면okay입력");
	while(1)
	{
	scanf("%s",input_str);
		if(strcmp(input_str,"okay")==0)
		{
		break;	
		}
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	scanf("%d %d",&width,&length);
	if(count%2=0)
	{
		map
	}
	mapprint(map);
	
}
void mapprint(int data[3][3])
{
	int k=0;
	printf("   1 2 3\n   ￣￣￣\n");
		for(int i = 2;i > -1;i--)
	{
		printf("%d| ",k);
			for(int j = 2;j > -1;j--)
		{
		
		printf("%d ",data[i][j]);
	

		}
	printf("\n");
	k++;
	}
}


//0 = nothing
//1 = x
//2 = o 
