#include<stdio.h>


// void greet(){
//     printf ("Good Morning\n"); 
//     printf ("How are you ?\n"); 
// return;
// }
// int main (){ //here int means that return value will be of int type i.e. this says what will be the type of return
//     greet();
//     greet();
//     greet();
// return 0; 
// }



// #include<stdio.h>
// int add (int x, int y){
//     return x+y;
// }
// int main(){
//     int a;
//     printf("Enter 1st number : ");
//     scanf ("%d", &a) ;
//     int b;
//     printf("Enter 2nd number : ");
//     scanf ("%d", &b) ;
//     int sum = add (a, b) ;
//     printf ("%d", sum) ;
//     return 0;
// }



// int average(int x, int y){
//     return (x+y)/2;
// }
// int main(){
//     int a,b;
//     printf("Enter Number1:");
//     scanf("%d",&a);
//     printf("Enter Number2:");
//     scanf("%d",&b);
//     int agv = average(a,b);
//     printf("%d",agv);
//     return 0;
// }


// #include<math.h>
// int main(){
//     printf("This is output %.2f\n",pow(2,10));
//     printf("This is output %.2f\n",log10(100));
//     return 0;
// }



// In case if we have defined function after calling it then it will show error to resolve this is issue we use function prototypes 



// int main (){
//     void fun();//this line is pausing current function and executiong(e.i. reading only) void fun() first and then moving to next line 
//     fun () ;//here now it is performing/calling this function and printing values
// return 0;
// }
// void fun(){
//     printf ("Hello");
// }



//----------------------------COMBINATION and PERMUTATION---------------------------------

// int factorial(int t){
//     int nfact=1;
//     for(int i =1;i<=t;i++){
//         nfact=nfact*i;
//     }
//     return nfact;
// }
// int main(){
//     int a,b,c;
//     printf("Enter n:");
//     scanf("%d",&a);
//     printf("Enter r:");
//     scanf("%d",&b);
//     printf("%d",factorial(a)/(factorial(b)*factorial(a-b)));
// }




//----------------------------PASCAL Triangle---------------------------------

// int factorial(int t){
//     int nfact=1;
//     for(int i =1;i<=t;i++){
//         nfact=nfact*i;
//     }
//     return nfact;
// }
// int combination(int a, int b){
//     int facto=factorial(a)/(factorial(b)*factorial(a-b));
//     return facto;
// }
// int main(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     for(int i=0;i<=a+1;i++){
//         for(int o=a;o>=i;o--){
//             printf(" ");
//         }
//         for(int j =0;j<=i;j++){
//         printf("%d ",combination(i,j));
//         }
//         printf("\n");
//     }
// }


// int swap(int x, int y){
//     x=x+y;//6
//     y=x-y;//2
//     x=x-y;//4
//     printf("This is Num1:%d\nThis is Num2:%d",x,y);
//     return 0;
// }
// int main(){
//     int a,b;
//     printf("Enter Num1:");
//     scanf("%d",&a);//2
//     printf("Enter Num2:");
//     scanf("%d",&b);//4
//     swap(a,b);
//     return 0;
// }




//------------------------------------POINTER-------------------------------------------------
// int main(){
//     int a=5;
//     int* t=&a;//this is used to store pointer value in given variable //even though pointer has it's own location which can be determined by again pointing it like below: 
//     printf("%p\n",t);
//     printf("%p\n",&t);
//     printf("%d\n",*t);//this is pointing towards t what ever is stored in t it will print
//     int b=0;
//     printf("%p\n",&b);
//     int d=*t;
//     printf("%d\n",d);//this will also print the same value as above
//     *t=90;//here this value is changed as normal function works
//     printf("%d\n",*t);
//     return 0;
// }




// int swap(int* x, int* y){
//     *x=*x+*y;//6
//     *y=*x-*y;//2
//     *x=*x-*y;//4
//     // printf("This is Num1:%d\nThis is Num2:%d",x,y);
//     return 0;
// }
// int main(){
//     int a,b;
//     printf("Enter Num1:");
//     scanf("%d",&a);//2
//     printf("Enter Num2:");
//     scanf("%d",&b);//4
//     swap(&a,&b);
//     printf("This is Num1:%d\nThis is Num2:%d",a,b);
//     return 1;
// }

//------------------------------------------HCF------------------------------------------
// int min(int a, int b){
//     if(a<b) return a;
//     else return b; 
// }
// int gcd(int a, int b){
//     int hcf;
//     for(int i=min(a,b);i>=1;i--){ 
//         if(a%i==0 && b%i==0) hcf=i;
//         break;
//     }
//     return hcf;
// }
// int main(){
//     int x,y;
//     printf("Enter a:");
//     scanf("%d",&x);
//     printf("Enter b:");
//     scanf("%d",&y);
//     printf("HCF of %d and %d is %d",x,y,gcd(x,y));
//     return 0;
// }



//--------------------------------------FACTORIAL--------------------------------------
// int fact(int n){
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial=factorial*i;
//     }
//     return factorial;
// }
// int main(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     printf("%d",fact(a));
//     return 0;
// }



//--------------------------------------FACBONACII--------------------------------------
// int fabonacii(int g){
//     int i=0,j=1,p;
//     printf("%d %d ",i,j);
//     for(int k=1;k<=g;k++){
//         p=i+j;
//         printf("%d ",p);
//         i=j;
//         j=p;
//     }
//     return 0;
// }
// int main(){
//     int a;
//     printf("Enter n:");
//     scanf("%d",&a);
//     fabonacii(a);
//     return 0;
// }


