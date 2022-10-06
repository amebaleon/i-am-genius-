#include <stdio.h>
int get_max(int x, int y);

int main()
{
	int a, b, max;
	scanf("%d%d", &a, &b);
	max = get_max(a, b);
	printf("%d와%d 중 큰 값은 %d입니다.\n", a, b, max);
}

int get_max(int x, int y){
	if(x > y)
	   return x;
	else
	   return y;
}
