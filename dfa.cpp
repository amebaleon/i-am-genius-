#include <stdio.h>
int main()
{
	int sum=0, n, i;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i % 5 == 0){
			sum += i;
		}
		else{
		continue;
		}
}
	printf("%d", sum);
}
