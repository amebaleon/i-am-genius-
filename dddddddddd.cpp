#include <stdio.h>
int main(){
char ar[]="Pointer";
char *pi1,*pi2;

pi1=&ar[0];
pi2=&ar[5];

printf("%c�� %c�� �Ÿ���%d\n",*pi1,*pi2,pi2-pi1);
return 0;
}
