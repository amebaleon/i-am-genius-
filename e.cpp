#include<stdio.h>
 
struct info{
    char name[20];
    int a,b,c;    
    int sum;
};
 
main(){
    
    int n,i,j;
    scanf("%d",&n);
    
    struct info p[n];
    struct info tmp;
    
    for(i=0;i<n;i++){
        scanf("%s%d%d%d",p[i].name,&p[i].a,&p[i].b,&p[i].c);
        p[i].sum=p[i].a+p[i].b+p[i].c;
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(p[j].sum<p[j+1].sum){
                tmp=p[j];
                p[j]=p[j+1];
                p[j+1]=tmp;
            }
        }
    }
    
    for(i=0;i<n;i++){
        printf("%s %d %d %d %d\n",p[i].name,p[i].a,p[i].b,p[i].c,p[i].sum);
    }
}
