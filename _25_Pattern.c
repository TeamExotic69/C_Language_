#include<stdio.h>
#include<string.h>
#include<math.h>
/*void main(){
    char greetings[] = {'H', 'e', 'l', 'l', 'o','\0',' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s \n", greetings);
    printf("%lu \n", sizeof(greetings));
    printf("This is an array \"wefd\" wfe \"fewads\" dedsdswed\n");
    printf("%lu\n", strlen(greetings));
}*/



/*
Escape character	Result	Description
\'	                '	    Single quote
\"	                "	    Double quote
\\	                \	    Backslash


Escape Character	Result	
\n	                New Line	
\t	                Tab	
\0	                Null

*/
// ----------------------------Print all the even numbers from 1 to 100-----------------------------
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         if(i%2==0){
//             printf("%d ",i);
//         }
//     }
// }



// --------------------------Print all the odd numbers from 1 to 100-------------------------------
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
// }

// ----------------------------------------Print the table of 19.-------------------------------
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= 10; i++){
//         printf("%d ",n*i);
//     }
    
// }



// ----------------------Print the table of ‘n’. Here ‘n’ is a integer which user will input.---------
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for (int i = 1; i <= 10; i++){
//         printf("%d ",n*i);
//     }
    
// }



// ----------------------------------Display this AP - 1,3,5,7,9.. upto ‘n’ terms.----------------------------
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for (int i = 0; i <= n; i++){
//         if(i%2!=0){
//             printf("%d ",i);
//         }
//     }
// }



// -------------------------Display this AP - 4,7,10,13,16.. upto ‘n’ terms.--------------------
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=4;i<=n;i++){
//         printf("%d ",i);
//         i+=2;
//     }
// }



// ---------------------------------Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.---------------------
// #include<stdio.h>
// void main(){
//     int n,i=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d ",i);
//         i*=2;
//     }
// }



//-----------------------------------Display this GP - 3,12,48,.. upto ‘n’ terms.-------------------------
// #include<stdio.h>
// void main(){
//     int n,i=3;
//     printf("Enter n:");
//     scanf("%d",&n);
//     while(i<=n){
//         printf("%d ",i);
//         i*=4;
//     }
// }



// -----------------------Display this AP - 100,97,94,..upto all terms which are positive.----------------
// #include<stdio.h>
// void main(){
//     int n=100;
//     for(int i=n;i>=0;i--){
//         printf("%d ",i);
//         i-=2;
//     }
// }



// ---------------------------Display this GP - 100,50,25,.. upto ‘n’ terms.---------------------
// #include<stdio.h>
// void main(){
//     int n;
//     float m=100;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%f ",m);
//         m/=2;
//     }
// }



//----------------------WAP to check if a number is prime or not.------------------
// #include<stdio.h>
// void main(){
//     int n,d;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     for(d=2;d<=(n^1/2);d++){
//         if(n%d==0){
//             printf("this is not prime: ");
//             break;
//         }
//         else{
//             printf("PRMIME:");
//             break;
//         }
//     }
// }



//--------------------------------WAP to print odd numbers from 1 to 100.------------
// #include<stdio.h>
// void main(){
//     int n=1,i;
//     while(n<=100){
//         printf("%d ",n);
//         n+=2;
//     }
// }



//------------------------do_while_loop----------
// #include<stdio.h>
// void main(){
//     int n=1,i;
//     do{
//         printf("%d ",n);
//         n+=2;
//     } 
//     while (n<=100);
// }



// void main( ) {
//     int j ;
//     while ( j <= 10 ) {
//         printf ( "\n%d", j ) ;
//         j = j + 1 ;
//     }   
// }

// -------------------------Print the factorial of a given number ‘n’.----------------------
// void main(){
//     long long int n,fac=1;
//     int i;
//     printf("Enetr n: ");
//     scanf("%lld",&n);
//     for(i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     printf("Factoril is: %lld",fac);
// }


//------------------Print the nth fibonacci number.------------------
// void main(){
//     int i=0,j=1,k,sum;
//     printf("Enter n: ");
//     scanf("%d",&k);
//     printf("%d %d ",i,j);
//     while(j<=k){
//         sum=i+j;
//         printf("%d ",sum);
//         i=j;
//         j=sum;
//     }
// }


/*----------------------Two numbers are entered through the
                        keyboard. Write a program to find the value of one
                        number raised to the power of another.-------------------------------*/
// #include<math.h>
// void main(){
//     int n,m,p;
//     printf(" number and power: ");
//     scanf("%d %d",&n,&m);
//     p=pow(n,m);
//     printf("This is :%d",p);
// }


/*/-------------Write a program to print out all Armstrong
                numbers between 1 and 500. If sum of cubes of
                each digit of the number is equal to the number 
                itself, then the number is called an Armstrong
                number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) +
                ( 3 * 3 * 3 )--------------------------------------------------------------------*/
// void main(){
//     int m,n,n1,a;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     n1=n;
//     while(n>0){
//         m=n%10;
//         a=a+(m*m*m);
//         n/=10;
//     }
//     if(a==n1) printf("This is an Armstrong number: ");
//     else printf("No this is not an armstrong numbeer: ");
// }



/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*-----------------------------------pattern in c language -----------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------*/



/*                  Print the given pattern

                            *****
                            *****
                            *****
*/
// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=4;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }



/*----------------------Print the given pattern

                            1 2 3 4
                            1 2 3 4
                            1 2 3 4
                            1 2 3 4------------------------------------------------------------------*/

//  void main(){
//      int n,a=1;
//      printf("Enter n: ");
//      scanf("%d",&n);
//      for(int i=1;i<=n;i++){
//             int a=1;
//          for(int j=1;j<=4;j++){
//              printf("%d",a);
//              a++;
//          }
//          printf("\n");
//      }
//  }



/*-------------------Print the given pattern

                            *
                            **
                            ***
                            ****---------------------------------------------------------------------*/


// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }




/*---------------------------Print the given pattern

                                    ****
                                    ***
                                    **
                                    *----------------------------------------------------------------*/




// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=n;i>=0;i--){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }





/*---------------------------Print the given pattern

                                    1
                                    1 2
                                    1 2 3
                                    1 2 3 4----------------------------------------------------------*/





// void main(){
//     int n,a=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//            int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             a++;
//         }
//         printf("\n");
//     }
// }





/*-----------------------------------Print the given pattern

                                            1 2 3 4
                                            1 2 3
                                            1 2
                                            1--------------------------------------------------------*/



// void main(){
//     int n,a=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=n;i>=0;i--){
//            int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             a++;
//         }
//         printf("\n");
//     }
// }




/* ----------------------------------Print the given pattern

                                            1
                                            1 3
                                            1 3 5
                                            1 3 5 7--------------------------------------------------*/



// void main(){
//     int n,a=1;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//            int a=1;
//         for(int j=1;j<=i;j++){
//             printf("%d",a);
//             a+=2;
//         }
//         printf("\n");
//     }
// }




/*---------------------------------------Print the given pattern

                                                A B C D
                                                A B C D
                                                A B C D
                                                A B C D----------------------------------------------*/




// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         int a=65;
//         for(int j=1;j<=4;j++){
//             printf("%c",a);
//             a+=1;
//         }
//         printf("\n");
//     }
// }





/*-----------------------------------Print the given pattern

                                            A
                                            A B
                                            A B C
                                            A B C D--------------------------------------------------*/



// void main(){
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         int a=65;
//         for(int j=1;j<=i;j++){
//             printf("%c",a);
//             a+=1;
//         }
//         printf("\n");
//     }
// }





/* ----------------------------------Print the given pattern

                                            1
                                            A B
                                            1 2 3
                                            A B C D
                                            1 2 3 4 5------------------------------------------------*/




// void main(){
//     int n,i,j,k,a,b;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         a=1;
//         b=65;
//         for(j=0;j<=i;j++){
//             if(i%2==0){
//             printf("%d ",a);
//             a++;
//             }
//             else{
//                 printf("%c ",b);
//                 b++;
//             }
//         }
//         printf("\n");
//     }
// }




/*---------------------------------Print the given pattern
                                            *
                                            *
                                        * * * * * 
                                            * 
                                            * -------------------------------------------------------*/
// void main(){
//     int i,j,n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(i==(n+1)/2||j==(n+1)/2)
//             printf("* ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
// }


/*--------------------------Print the given pattern
                                * * * *
                                *     *
                                * * * *--------------------------------------------------------------*/
// void main(){
//     int i,j,r,c;
//     printf("Enter rows: ");
//     scanf("%d",&r);
//     printf("Enter Columns: ");
//     scanf("%d",&c);
//     for(i=1;i<=r;i++){
//         for(j=1;j<=c;j++){
//             if(i==1||i==r||j==1||j==c)
//             printf("* ");
//             else
//             printf("  ");
//         }
//         printf("\n");
//     }
// }                               




/*-----------------------------Print the given pattern
                                *               *
                                    *       *
                                        *
                                    *       *
                                *               *----------------------------------------------------*/
// void main(){
//     int i,j,n,x=0;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n;j++){
//             if(i==j || i==(1+x)&&j==(n-x))
//             printf("* ");
//             else
//             printf("  ");
//         }
//         x++;
//         printf("\n");
//     }
// }                               
//hhhhhhhhhhhuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuurrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeehhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh:) 

/*------------Print the given pattern
                    1
                    2 3
                    4 5 6
                    7 8 9 10-------------------------------------------------------------------------*/
// void main(){
//     int i,j,n,m;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     m=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//         printf("%d ",m);
//         m++;
//         }
//         printf("\n");
//     }
// }


/*--------------Print the given pattern
                    1
                    0 1
                    1 0 1
                    0 1 0 1--------------------------------------------------------------------------*/
// void main(){
//     int i,j,k,n,m;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     m=0;
//     for(i=1;i<=n;i++){
//         m=0;
//         for(j=1;j<=i;j++){
//             if((i+j)%2!=0){
//             printf("%d ",m);
//             }
//             else {
//             printf("%d ",m+1);
//             }
//         }
//         printf("\n");
//     }
// }

/*---------------------Print the given pattern
                            * 
                           ** 
                          *** 
                        *****------------------------------------------------------------------------*/
// void main(){
//     int i,n,j,k;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=n;j>=i;j--){
//             printf("  ");
//         }
//         for(k=1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
    
// }


/*----------------Print the given pattern
                              **** 
                            **** 
                          **** 
                        ****-------------------------------------------------------------------------*/
// void main(){
//     int i,n,m,j,k,l;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=n;j>=i;j--){
//             printf("  ");
//         }
//         for(k=n;k>=1;k--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


/*--------------------Print the given pattern
Alphabet Triangle
                          A
                        A B
                      A B C
                    A B C D--------------------------------------------------------------------------*/
// void main(){
//     int i,j,k,n;
//     char c='A';
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         c='A';
//         for(j=n;j>=i;j--){
//             printf("  ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%c ",c);
//             c++;
//         }
//         printf("\n");
//     }
// }


/*--------------Print the given pattern
                       * 
                      *** 
                     ***** 
                    *******--------------------------------------------------------------------------*/
// void main(){
//     int i,n,j,k,l;
//     printf("Enter n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=n;j>=i;j--){
//             printf("  ");
//         }
//         for(k=1;k<=i;k++){
//             printf("* ");
//         }
//         for(l=2;l<=i;l++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

/*------------------------Print the given pattern
                          Number Pyramid
                              1
                            1 2 3
                          1 2 3 4 5
                        1 2 3 4 5 6 7----------------------------------------------------------------*/
// void main(){
//     int i,j,k,l,n,m;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         m=1;
//         for(j=n;j>=i;j--){
//             printf("  ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%d ",m);
//             m++;
//         }
//         for(l=2;l<=i;l++){
//             printf("%d ",m);
//             m++;
//         }
//         printf("\n");
//     }
// }

/*------------------------ Print the given pattern
                           Alphabet Pyramid
                          A
                        A B C
                      A B C D E
                    A B C D E F G--------------------------------------------------------------------*/
// void main(){
//     int i,j,k,l,n;
//     char m='A';
//     printf("Enter n: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         m='A';
//         for(j=n;j>=i;j--){
//             printf("  ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%c ",m);
//             m++;
//         }
//         for(l=2;l<=i;l++){
//             printf("%c ",m);
//             m++;
//         }
//         printf("\n");
//     }
// }

/*------------------Print the given pattern
                    Number Pyramid Mast
                           1
                         1 2 1
                       1 2 3 2 1
                     1 2 3 4 3 2 1-------------------------------------------------------------------*/
//  void main(){
//      int i,j,k,l,n,m;
//      printf("Enter n:");
//      scanf("%d",&n);
//     //  int nsp=n-1;
//      for(i=1;i<=n;i++){
//          m=1;
//          for(j=n-1;j>=i;j--){
//              printf("  ");
//          }
//          for(k=1;k<=i;k++){
//              printf("%d ",m);
//              m++;
//          }
//          m--;
//          for(l=2;l<=i;l++){
//              printf("%d ",--m);
//          }
//          printf("\n");
//      }
//  }


/*
                                                    *
                                                  **
                                                ***
                                              ****
                                            *****
                                          ******
                                        *******
                                      ********
                                    *********
                                             ******** 
                                            *******  
                                           ******   
                                          *****    
                                         ****     
                                        ***      
                                       **       
                                      *        
-----------------------------------------------------------------------------------------------------*/
// int main(){
//   int n,m;
//   printf("Enter n: ");
//   scanf("%d",&n);
//   for(int i =1;i<=n;i++){
//     for(int j=n;j>i;j--){
//       printf("  ");
//     }
//     for(int k=1;k<=i;k++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   for(int i =1;i<=n;i++){
//     for(int o=n;o>i-1;o--){
//       printf(" ");
//     }
//     for(int j=n;j>i;j--){
//       printf("*");
//     }
//     for(int k=1;k<=i;k++){
//       printf(" ");
//     }
//     printf("\n");
//   }
// }


/*-------------------------Print the given pattern
                             *
                            *** 
                           *****
                          *******
                           *****
                            *** 
                             * ----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   for(int i=1;i<=a;i++){
//     for(int j=a;j>i;j--){
//       printf(" ");
//     }
//     for(int k=1;k<=i;k++){
//       printf("*");
//     }
//     for(int l=2;l<=i;l++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   for(int m=1;m<=a;m++){
//     for(int n=1;n<m+1;n++){
//       printf(" ");
//     }
//     for(int o=a;o>m;o--){
//       printf("*");
//     }
//     for(int p=a;p>(m+1);p--){
//       printf("*");
//     }
//     printf("\n");
//   }
// }


/*
                        *******
                        *** ***
                        **   **
                        *     *----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   short q=1;
//   short b=a-1;
//   for(int t=1;t<=(a*2-1);t++){
//     printf("*");
//   }
//   printf("\n");
//   for(int i =1;i<=b;i++){
//     for(int j=b;j>=i;j--){
//       printf("*");
//     }
//     for(int k=1;k<=q;k++){
//       printf(" ");
//     }
//     q+=2;
//     for(int l=b;l>=i;l--){
//       printf("*");
//     }
//     printf("\n");
//   }
// return 0;
// }




/*Print the given pattern
Number Pyramid Mast
                  1 2 3 4 5 6 7
                  1 2 3   5 6 7
                  1 2       6 7
                  1           7----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   short q=1;
//   int p=1;
//   for(int t =1;t<=(a*2-1);t++){
//     printf("%d",p);
//     p++;
//   }
//   printf("\n");
//   for(int i=1;i<=a-1;i++){
//     p=1;
//     for(int j =a-1;j>=i;j--){
//       printf("%d",p);
//       p++;
//     }
//     for(int k=1;k<=q;k++){
//       printf(" ");
//       p++;
//     }
//     q+=2;
//     for(int l=a-1;l>=i;l--){
//       printf("%d",p);
//       p++;
//     }
//     printf("\n");
//   }
//   return 0;
// }


/*Print the given pattern

                  Number Pyramid Mast
                  A B C D E F G
                  A B C   E F G
                  A B       F G
                  A           G----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   char c ='A';
//   int p=1;
//   for(int t=1;t<=(a*2-1);t++){
//     printf("%c",c);
//     c++;
//   }
//   printf("\n");
//   for(int i =1;i<=a;i++){
//     c='A';
//     for(int j=a-1;j>=i;j--){
//       printf("%c",c);
//       c++;
//     }
//     for(int k=1;k<=p;k++){
//       printf(" ");
//       c++;
//     }
//     p+=2;
//     for(int l=a-1;l>=i;l--){
//       printf("%c",c);
//       c++;
//     }
//     printf("\n");
//   }
//   return 0;
// }


/*Print the given pattern

                  Number Pyramid Mast
                  1 2 3 4 3 2 1
                  1 2 3   3 2 1
                  1 2       2 1
                  1           1----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   int y=0;
//   for(int t=1;t<=(a*2-1);t++){
//     if(t<=a){
//       printf("%d",++y);
//     }
//     else {
//       printf("%d",--y);
//     }
//   }
//   int u=1;
//   printf("\n");
//   for(int i=1;i<=a-1;i++){
//     y=1;
//     for(int j=a-1;j>=i;j--){
//       printf("%d",y++);
//     }
//     for(int k=1;k<=u;k++){
//       printf(" ");
//     }
//     u+=2;
//     for(int l=a-1;l>=i;l--){
//       printf("%d",--y);
//     }
//     printf("\n");
//   }
//   return 0;
// }



/*Print the given pattern

                  Number Pyramid Mast
                  A B C D C B A
                  A B C   C B A
                  A B       B A
                  A           A----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   char c='@';
//   for(int t=1;t<=(a*2-1);t++){
//     if(t<=a){
//       printf("%c",++c);
//     }
//     else {
//       printf("%c",--c);
//     }
//   }
//   printf("\n");
//   int q=1;
//   for(int i=1;i<=a-1;i++){
//     c='A';
//     for(int j=a-1;j>=i;j--){
//       printf("%c",c++);
//     }
//     for(int k=1;k<=q;k++){
//       printf(" ");
//     }
//     q+=2;
//     for(int l=a-1;l>=i;l--){
//       printf("%c",--c);
//     }
//     printf("\n");
//   }
//   return 0;
// }




/*                    1   
                    2   3   
                  4   5   6   
                7   8   9   10----------------------------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   int n =1;
//   int q=1;
//   for(int i=1;i<=a;i++ ){
//     for(int t =a;t>i;t--){
//       printf("  ");
//     }
//     for(int j=1;j<=q;j++){
//       if(n%2==0){
//         printf("%d   ",n++);
//       }
//       else {
//         printf("%d   ",n++);
//       }
//     }
//     q+=1;
//     printf("\n");
//   }
// }



//--------------------------------ALTERNATE-EASY-------------------------------------------------------
// int main(){
//   int q=1,a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   int n=1;
//   for(int i =1;i<=a;i++){
//     for(int j =a;j>i;j--){
//       printf("  ");
//     }
//     for(int k=1;k<=q;k++){
//       printf("%d   ",n++);
//     }
//     q++;
//     printf("\n");
//   }
// }


// int main(){
//   int a,n,q=1;
//   printf("Enter n:");
//   scanf("%d",&a);
//   for(int i=1;i<=a;i++){
//     n=1;
//     for(int j=a;j>i;j--){
//       printf(" ");
//     }
//     for(int k=1;k<=q;k++){
//       printf("%d",n);
//       n++;
//     }
//     q+=2;
//     printf("\n");
//   }
// }



/*Print the given pattern

                        Number Pyramid Mast
                        4 4 4 4 4 4 4
                        4 3 3 3 3 3 4
                        4 3 2 2 2 3 4
                        4 3 2 1 2 3 4
                        4 3 2 2 2 3 4
                        4 3 3 3 3 3 4
                        4 4 4 4 4 4 4-----------------------------------------------------*/
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   int min=0;
//   for(int i=1;i<=2*a-1;i++){
//     for(int j=1;j<=2*a-1;j++){
//       int c=i;
//       int d=j;
//       if(i>a) c=2*a-i;
//       if(j>a) d=2*a-j;
//       if(c<d) min=c;
//       else min=d;
//       printf("%d ",min);
//     }
//   printf("\n");
//   }
//   return 0;
// }




//------------------------------------ORIGINAL------------------------------------
// int main(){
//   int a;
//   printf("Enter n:");
//   scanf("%d",&a);
//   int min=0;
//   for(int i=1;i<=2*a-1;i++){
//     for(int j=1;j<=2*a-1;j++){
//       int c=i;
//       int d=j;
//       if(i>a) c=2*a-i;
//       if(j>a) d=2*a-j;
//       if(c<d) min=c;
//       else min=d;
//       printf("%d ",a+1-min);
//     }
//   printf("\n");
//   }
//   return 0;
// }