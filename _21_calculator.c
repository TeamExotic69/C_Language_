#include<stdio.h>
#include<stdio.h>
void main(){
    float n,m,sum,minus,div,mod,multi;
    int o;
    // char o;
    printf("Enter a number: ");
    scanf("%f",&n);
    printf("Enter operator(1:'+', 2:'-', 3:'*', 4:'/'): ");
    scanf("%d",&o);
    printf("Enter another number: ");
    scanf("%f",&m);
    switch (o){
        case 1:
            sum=n+m;
            printf("Sum of these number is: %f",sum);
            break;
        case 2:
            minus=n-m;
            printf("minus of these numbers is: %f",minus);
            break;
        case 3:
            multi=n*m;
            printf("Multiply of these numbers is: %f",multi);
            break;
        case 4:
            div=n/m;
            printf("Dividing these numbers: $f",div);
            break;
        default:
            printf("~~ERROR IN CALCULATIONS~~");
    }
}