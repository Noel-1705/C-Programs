#include<stdio.h>
void main(){
    int a,b,i,j,m,n,A[20][20],B[20][20],S[20][20],M[20][20];
    printf("Enter the size of the matrix A\n");
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter the element for A[%d][%d] of matrix A: \n ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("The size of matrix A is %d x %d\n",a,b);
    printf("The elements of matrix A are: \n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d",A[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("Enter the size of the matrix B\n");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element for B[%d][%d] of matrix B: \n",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    printf("The size of matrix B is %d x %d\n",m,n);
    printf("The elements of matrix B are:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",B[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    if(a==m && b==n){
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                S[i][j]=A[i][j]+B[i][j];
            }
        }
        printf("The sum of matrix A and B are:\n");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                printf("%d",S[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
    else{
        printf("Matrices are of two different sizes \n Hence cannot find their sum!\n ");
    }
    if(b==m){
        for(i=0;i<b;i++){
            for(j=0;j<b;j++){
                M[i][j] = A[i][j] * B[i][j];
            }
        }
        printf("The product of matrix is: \n");
        for(i=0;i<b;i++){
            for(j=0;j<b;j++){
                printf("%d",M[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
    else{
        printf("Cannot multiply the matrices due to incompatible size! ");
    }
}