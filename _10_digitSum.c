#include<stdio.h>
// #include<conio.h>
void main(){
    int m,t,n,i;
    t=0;
    // clrscr();
    printf("Entre any 5 digit number: ");
    scanf("%d",&n);
    for(i=1;i<=5;i++){
        m=n%10;
        t=t+m;
        n=n/10;
    }
    printf("sum of digits is:%d",t);
}


/* A number is inputted from keyboard, WAP to find sum of inputed number ex: 125 inputted output is 8*/
/*#include<stdio.h>
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
}*/