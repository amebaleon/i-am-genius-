#include <stdio.h>
#include <string.h>
void swap (struct student* first, struct student* second);
void sort (struct student stu[], int len);
struct student{
	char name[100];
	int one;
	int two;
	int three;
	int total;
};

int main(){
	struct student stu[100];
	int total[100];
	int numberofstudents;
	int temp=0;
	int count=0;
	
	scanf("%d",&numberofstudents);
	
	for(int i = 0; i<numberofstudents; i++){
		scanf("%s", stu[i].name);
		scanf("%d", &stu[i].one);
		scanf("%d", &stu[i].two);
		scanf("%d", &stu[i].three);
		stu[i].total = stu[i].one + stu[i].two + stu[i].three; 
	}
	
	sort(stu, numberofstudents);
	
	for(int i = 0; i<numberofstudents; i++){
		printf("%s ", stu[i].name);
		printf("%d ", stu[i].one);
		printf("%d ", stu[i].two);
		printf("%d ", stu[i].three);
		printf("%d ", stu[i].total);
		printf("\n");
	}
}

void sort(struct student stu[], int len){
		int first_total=0;
		int second_total=0;
	
		for(int i =0; i<len; i++){
			for(int j=0; j<len-1; j++){
				if(stu[j].total < stu[j+1].total){
					swap(&stu[j], &stu[j+1]);
				}
			}
		}
		
		
}

void swap (struct student* first, struct student* second)
{
	struct student tmp = *first;
	*first = *second;
	*second = tmp;
	
	return;
}
