//Hint! 세 꼭지점이 (x1 y1), (x2 y2), (x3 y3)인 삼각형의 무게중심 = ((x1+x2+x3)/3 (y1+y2+y3)/3)
#include <stdio.h>
struct point{
	int x;
	int y;
};

struct point p1,p2,p3,p4,p5;
scanf("%d %d",&p1.x,&p1.y);
scanf("%d %d",&p2.x,&p2.y);
scanf("%d %d",&p3.x,&p3.y);
printf("%d %d",((p1.x+p2.x+p3.x)/3,((p1.y+p2.y+p3.y)/3);
