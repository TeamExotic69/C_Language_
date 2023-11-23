#include<stdio.h>
// #include<math.h>
// #include<conio.h>
void main(){
    int n,m,rem,rev;
    // clrscr();
    printf("Enter any number: ");
    scanf("%d",&n);
    m=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(m==rev)
    printf("Yes! this is palindrome ");
    else
    printf("not not this one!");
}
