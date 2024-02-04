#include<stdio.h>

// int fact(int n){
//     if(n==1 || n==0) return 1;
//     return n*fact(n-1);//this will last forever untill we use any base case  
// }
// int main(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     printf("%d",fact(a));
//     return 0;
// }



//PRINT N TO 1
// int num(int y){
//     printf("%d ",y);
//     if(y==1 || y==0) return y;
//     return y-num(y-1);
    
// }
// int main(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     num(a);
//     return 0;
// }


//PRINT 1 TO N
// int num(int x,int y){
//     if(x>y) return x;
//     printf("%d ",x);
//     return num(x+1,y);
// }
// int main(){
//     int a,o=1;
//     printf("Enter n:");
//     scanf("%d",&a);
//     num(o,a);
//     return 0;
// }




// void num(int y){
//     if(y==0) return;
//     printf("%d ",y);//if we use this print statement here then it will print in the order or recursion 
//     num(y-1);
//     printf("%d ",y);//if we use print statement after calling the function the it will print in a reverse order of recursion 
//     return; 
    
// }
// int main(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     num(a);
//     return 0;
// }






//SUM OF 1 TO N
// void num(int x,int y){
//     if(x==0){
//         printf("%i",y);
//         return;
//     } 
//     num(x-1,x+y);
//     return;
// }
// int main(){
//     int a=0,o=1;
//     // printf("Enter n:");
//     // scanf("%d",&a);
//     num(5,0);
//     return 0;
// }





// SUM OF 1 TO N by return type
// int num(int y){
//     if(y==0 || y==1) return 1;
//     return y+num(y-1);
// }
// int main(){
//     int a,o=1;
//     printf("Enter n:");
//     scanf("%d",&a);
//     printf("%i",num(a));
//     return 0;
// }





// int power(int x, int y){
//     // 4,5 => 4*4*4*4*4
//     if(y==1) return x;   
//     return x*power(x,y-1);
// }
// int main(void){
//     int a=2,b=3;
//     // printf("Enter n:");
//     // scanf("%d",&a);
//     // printf("Enter p:");
//     // scanf("%d",&b);
//     printf("%i",power(a,b));
//     return 0;
// }





//normal febonacci
// int fab(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     int e=0,r=1,t;
//     for(int i =2;i<=__INT_MAX__;i++){//this loop will start from 2 because starting 2 numbers are the starting point of this, we need to declare them before the loop begins
//         if(i==a){
//             printf("%i ",t);
//             break;
//         }
//         t=e+r;
//         e=r;
//         r=t;
//     }
//     return 0;
// }



//FABONACCI SERIES BY RECURSION
// int fabonacci(int n){
//     if(n==1) return 0;
//     if(n==2||n==3) return 1;
//     return fabonacci(n-1)+fabonacci(n-2);
// }
// int main(){
//     int x;
//     printf("Enter n:");
//     scanf("%d",&x);
//     printf("%d",fabonacci(x));
//     return 1;
// }



//Steps probability 
//JUST LIKE FABONACCI NUMBERS 
// int prob(int x){
//     if(x==1||x==2) return x;
//     return prob(x-1)+prob(x-2);
// }
// int main(){
//     int a=5,b=2;//5--> ways and 2--> types of steps (Singlg and double steps)
//     printf("Enter number of steps: ");
//     scanf("%d",&a);
//     printf("%d",prob(a));
//     return 1;
// }



//Steps probability 
//JUST LIKE FABONACCI NUMBERS 
// int prob(int x){
//     if(x==1||x==2||x==3) return x;
//     return prob(x-1)+prob(x-2)+prob(x-3);
// }
// int main(){
//     int a=5,b=3;//5--> ways and 3--> types of steps (Singlg and double steps)
//     printf("Enter number of steps: ");
//     scanf("%d",&a);
//     printf("%d",prob(a));
//     return 1;
// }







//  Stairs Steps probability
// int power(int x, int y){
//     // 4,5 => 4*4*4*4*4
//     if(y==0) return 1;
//     int t=power(x,y/2);// we have a problem here it will never tell correct answer for odd power function
//     if(y%2==0) return t*t;
//     else return t*t*x; 
// }
// int main(void){
//     int a=9,b=3;//2x2x2
//     printf("Enter n:");
//     scanf("%d",&a);
//     printf("Enter p:");
//     scanf("%d",&b);
//     printf("%i",power(a,b));
//     return 0;
// }



//Maze Path probability 
int maze(int ri, int ci, int rf, int cf){
    int rs,ls,tw;
    if(ri==rf && ci==cf) return tw;
    rs=maze(ri,ci+1,rf,cf);
    ls=maze(ri+1,ci,rf,cf);
    tw=rs+ls;
    return tw;
}
int main(void){
    int a=3,b=3;
    printf("Enter Number of rows:");
    scanf("%d",&a);
    printf("Enter Number of columns:");
    scanf("%d",&b);
    printf("%i",maze(1,1,a,b));
    return 0;
}