#include <stdio.h>
int get_sum(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, get_sum(n));
}

int get_sum(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

