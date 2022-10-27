#include <stdio.h>
int main()
{
	int sum=0, a, min=0, max=0, b, count=0;
	scanf("%d%d", &a, &b);
	if(a > b){
       max = a;
       min = b;
	}
	else{
		min = a;
		max = b;
	}
	for(int i=min; i<=max; i++){
		if(i % 3 == 0||i % 5 == 0){
			count++;
	sum += i;
	}      
	
}
	printf("sum : %d\n", sum);
	printf("avg : %.1f ",(float)sum/ count);
}
