#include<stdio.h>
void main(){
    int p,i,j,t;
    i=0;
    j=1;
    printf("Fibonacci Series limit: ");
    scanf("%d",&t);
    printf("%d %d ",i,j);
    while (p<t ){
        p=j+i;    
        printf("%d ",p);
        i=j;
        j=p;
    }

    
}