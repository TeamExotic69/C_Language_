/* A number is inputted from keyboard, WAP to find sum of inputted number ex: 125 inputted output is 8*/
#include<stdio.h>
void main(){
    long long int n,sum,i;
    i=1;
    sum=0;
    printf("Enter any number: ");
    scanf("%lld",&n);
    while (n>0){
        i=n%10;
        sum=sum+i;
        n=n/10;
    }
    printf("sum of digits is: %lld",sum);
}