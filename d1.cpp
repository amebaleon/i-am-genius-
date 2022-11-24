#include <stdio.h>
int swap (struct test);
int sort (int a,int b,int c);
struct aia{
	char name[100];
	int one;
	int two;
	int three;
	int total[100];
};
int main(){
	struct aia ai[100];
	int total[100];
	int numberofstudents;
	int temp=0;
	int count=0;
	scanf("%d",&numberofstudents);
	numberofstudents=temp;
	for(numberofstudents=numberofstudents;numberofstudents>0;numberofstudents--){
		scanf("%s",&ai[numberofstudents].name);
		scanf("%d",&ai[numberofstudents].one);
		scanf("%d",&ai[numberofstudents].two);
		scanf("%d",&ai[numberofstudents].three);
		aia.total[numberofstudents]=ai[numberofstudents].one+ai[numberofstudents].two+ai[numberofstudents].three;
		count ++;
	}
	swap(aia.total);
}
void swap (struct aia)
{
	for(int i=0;i<5;i++){
			for(int j=0;j<5-1;j++){
				if(arr[j] < arr[j+1]){
					arr=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=tmp;
				}
			}
		}
		return;
}
