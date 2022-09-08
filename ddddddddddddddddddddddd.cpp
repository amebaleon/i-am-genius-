#include <stdio.h>

int main()
{
    int a;
    int *p = &a;
    scanf("%d", p);

    int i;
    for(i=0;i<*p;i++){
        printf("*");
    }
}
//240
