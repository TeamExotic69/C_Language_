#include<stdio.h>
//#include<conio.h>;
void main(){
    //-------------------------valis upto 20 factorial only-------------------------
    long long int i,j,fac;
    fac=1;
    printf("enter any number to find factorial: ");
    scanf("%lld",&i);
    for(j=i;j>=1;j--){
        fac=fac*j;
    }
    printf("factorioal of this number is: %lld",fac);
}
/*-----------------------------teacher's program----------------------
#include<stdio.h>
#include<conio.h>
void main()
{
int a=0, fact=1, i=0;
printf("enter number");
scanf("%d",&a);
i=a;
while(i>=1)
{
fact=fact*i;
i--;
}
printf("factorial is %d", fact);
}
*/