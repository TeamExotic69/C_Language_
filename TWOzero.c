#include<stdio.h>
void main(){
    char c;
    printf("Enter any alphabvet: ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("This is vowel");
    else
        printf("This is not vowel");
}