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
	int nine=0;
	printf("'가로 세로' 형태로 입력\n이해했다면okay입력");
	while(1)
	{
	scanf("%s",input_str);
		if(strcmp(input_str,"okay")==0)
		{
		break;	
		}
	}
	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("맵 모양(참고)\n");
	printf("   2 1 0\n   ￣￣￣\n");
	printf("0| 0 03 0\n");
	printf("1| 0 0 0\n");
	printf("2| 0 0 0\n");
	while(1)
	{ 
	printf("dddd");
		if(nine < 9)
		{
			scanf("%d %d",&width,&length);
			if(count % 2 == 1)
			{

				map[width][length] = 1;
				count++;

			}
			else if(count % 2 == 0)
			{
				map[width][length] = 2;
				count++;
			}
			mapprint(map);
			nine++;
		}
	}
}
void mapprint(int data[3][3])
{
	int k=2;
	printf("   2 1 0\n   ￣￣￣\n");
		for(int i = 2;i > -1;i--)
	{
		printf("%d| ",k);
			for(int j = 2;j > -1;j--)
		{
		if(data[i][j] == 1)
		{
		printf("X ");
		}
		else if(data[i][j] == 2)
		{
		printf("O ");
		}
		else if(data[i][j] == 0)
		{
		printf("  ");
		}
		}
	printf("\n");
	k--;
	}
}
