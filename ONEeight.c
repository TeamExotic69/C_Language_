#include<stdio.h>
void main(){
    int x,i,j;
    printf("Enter number of times you want to print patern: ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        printf("\n");
            int n=1;
        for(j=i;j>=1;j--){
            printf("%d",n);
            n++;
        }
    }
}