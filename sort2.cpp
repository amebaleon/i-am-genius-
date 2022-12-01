#include <stdio.h>
#include <string.h>
void firstswap (struct student* first, struct student* second);
void firstsort (struct student stu[], int len);
void secondsort (struct student* wfirst);

struct student{
	char name[100];
	int one;
	double two;
};

int main()
{
	struct student stu[100];
	int total[100];
	int numberofstudents=5;
	int temp=0;
	int count=0;
	
	
	for(int i = 0; i<numberofstudents; i++){
		scanf("%s", stu[i].name);
		scanf("%d", &stu[i].one);
		scanf("%lf", &stu[i].two); 
	}

	firstsort(stu, numberofstudents);
	printf("name\n");
	for(int i = 0; i<numberofstudents; i++){
		printf("%s ", stu[i].name);
		printf("%d ", stu[i].one);
		printf("%.1lf ", stu[i].two);
		printf("\n");
	}
	secondsort (stu);
	printf("\nweight\n");
	for(int i = 0; i<5; i++){
		printf("%s ", stu[i].name);
		printf("%d ", stu[i].one);
		printf("%.1lf ", stu[i].two);
		printf("\n");
	}
	return 0;
}

void firstsort(struct student stu[], int len){
		for(int i =0; i<len; i++){
			for(int j=0; j<len-1; j++){
				if(strcmp( stu[j].name, stu[j+1].name)>0){
					firstswap(&stu[j], &stu[j+1]);
				}
			}
		}


}

void firstswap (struct student* first, struct student* second)
{
	struct student tmp = *first;
	*first = *second;
	*second = tmp;

}
void secondsort (struct student stu[])
{
			for(int i =0; i<5; i++){
			for(int j=0; j<5-1; j++){
				if(stu[j].two < stu[j+1].two){
					firstswap(&stu[j], &stu[j+1]);
				}
			}
		}


}
