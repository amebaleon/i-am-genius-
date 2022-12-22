#include <stdio.h>
#include <string.h>
void swap (struct student *first, struct student *second);
void sort (struct student stu[], int len);

struct student{
	char name[100];
	int one;
	double two;
};

int main(){
	struct student stu[100];
	int total[100];
	int numberofstudents = 5;
	int temp=0;
	int count=0;
	char height;
	char weight;

	for(int i = 0; i<numberofstudents; i++){
		scanf("%s", stu[i].name);
		scanf("%d", &stu[i].one);
		scanf("%lf", &stu[i].two);
	}

	sort(stu, numberofstudents);

	for(int i = 0; i<numberofstudents; i++){
		printf("%s ", stu[i].name);
		printf("%d ", stu[i].one);
		printf("%.1lf ", stu[i].two);
		printf("\n");
	}
}

void sort(struct student stu[], int len){
		int first_total=0;
		int second_total=0;
//len=5
		for(int i =0; i<len; i++){
			for(int j=0; j<len-1; j++){
				if(strcmp(stu[j].name,stu[j].name) == -1){
					swap(&stu[j], &stu[j+1]);
				}
			}
		}


}

void swap (struct student *first, struct student *second)
{
	struct student *tmp = first;
	*first = *second;
	*second = *tmp;

	return;
}