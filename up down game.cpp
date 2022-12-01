#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
int main(){
		int uNum;
		int cNum;
		int correct = 0;
		int cnt = 0;
		int c = 30;
		int count[100000];
		int secondcount[10000];
		int j = -1;
		
		srand(time(NULL));
		cNum = rand()&99 + 1;
		
		while(1){
			printf("Choose a number (1~100) (0 : quit):");
			scanf("%d",&uNum);
			if(uNum == 0){
				printf("record");
				for(int a=0;a<j;a++)
				{
				printf("number%d%d\n",a+1,count[a]);
				printf("tried time%d%d",a+1,secondcount[a]);
			}
				return 0;
			}
			else if( !( uNum>=1 && uNum<=100 ) ){
				printf("out of range (1~100).\n");
				continue;
			}
			cnt++;
			
			if ( uNum == cNum)	correct = 1;
			else if(uNum > cNum)	printf("Too High!!!\n");
			else					printf("Toolow!!!\n");
			
			if(correct){
				j++;
				Sleep(100);
				printf(".");
				Sleep(100);
				printf(".");
				Sleep(100);
				printf(".");
				Sleep(1000);
				printf("C");
				Sleep(c);
				printf("o");
				Sleep(c);
				printf("r");
				Sleep(c);
				printf("r");
				Sleep(c);
				printf("e");
				Sleep(c);
				printf("c");
				Sleep(c);
				printf("t");
				Sleep(c);
				printf(" ");
				Sleep(c);
				printf("\n");
				printf("Information about this game");
				Sleep(100);
				printf("\n");
				printf("The number is %d!\n",cNum);
				Sleep(100);
				printf("you tried %d times.\n", cnt);
				Sleep(100);
				printf("Let's play again...\n\n");
				Sleep(5000);
				count[j]=cNum;
				secondcount[j]=cnt;
				for(int i=0;i<100;i++)
				{
					printf("\n");
				}
				cNum = rand()%99 +1;
				cnt = 0;
				correct = 0;
			}
		}
}
