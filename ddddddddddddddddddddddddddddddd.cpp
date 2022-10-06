#include <stdio.h>

struct spuare
{
	int x;
	int y;
	int width;
};

int main()
{
	struct spuare s;
	
	printf("사각형의 가로와 세로의 길이를 입력하세요:");
	scanf("%d %d",&s.x,&s.y);
	
	s.width = s.x * s.y;
	printf("사각형의 넓이는 %d입니다.\n",s.width);
	
	return 0;
}
