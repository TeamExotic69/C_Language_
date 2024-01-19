#include<stdio.h>
// void main(){
//     int n;
//     printf("Enter  n:");
//     scanf("%d",&n);
//     int a[n];
//     for(int i =0;i<n;i++){
//         printf("Enter %d element: ",i);
//         scanf("%d",&a[i]);
//     }
//     for(int j =0;j<n;j++){
//         printf("%d ",a[j]);
//     }
//     printf("\n");
//     for(int k =n-1;k>=0;k--){
//         printf("%d ",a[k]);
//     }
// }



// void  main(){
//     int n;
//     printf("Enter number of students:");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         printf("Marks of student %d: ",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("\n");
//     for(int j=0;j<n;j++){
//         if(a[j]<35) printf("Student %d has less than 35 Marks!",j+1);
//         printf("\n");
//     }
// }



void main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        printf("Enter Element: ");
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int j=0;j<n;j++){
        printf("%p\n",&a[j]);//this is how we print exact place where our array is stored in memory by %p i.e. pointer refers to location
    }
}