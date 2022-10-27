#include <stdio.h>
#include <string.h>
struct pein{
	double ky;
	double secret;
};
int main(){
	struct pein papa,mama;
	int a,b;
	scanf("%lf %lf",&papa.ky,&papa.secret);
	scanf("%lf %lf",&mama.ky,&mama.secret);
	//(papa.ky+mama.ky)/2
	//(papa.secret+mama.secret)/2
	printf("height : %dcm\nweight : %.1lfkg",(int)(papa.ky+mama.ky)/2+5,(papa.secret+mama.secret)/2-4.5);
}
