#include <stdio.h>
int get_sum(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("1부터 %d까지의 합은 %d입니다.\n", n, get_sum(n));
}

int get_sum(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

