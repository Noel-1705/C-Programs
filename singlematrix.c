#include<stdio.h>
void main()
{
    int A[20][20],i,j,p,q,m,n,T[20][20],sum=0;

    //Asking for the size of the array

    printf("Enter the size of the array: \n");
    scanf("%d %d",&i,&j);

    //Loop to enter the elements of the array

    for (m=0;m<i;m++)
    {
        for (n=0;n<j;n++)
        {
            printf("Enter the elements: \n");
            scanf("%d",&A[m][n]);
        }
    }
    //Loop to print the elements of the array
    printf("The array is: \n");
    for (m=0 ; m < i; m++)
    {
        for (n=0;n<j;n++)
        {
            printf("  ");
            printf("%d",A[m][n]);
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");

    //Loop to produce Transpose of a matrix

    for (m=0 ; m < i; m++)
    {
        for (n=0;n<j;n++)
        {
            T[n][m]=A[m][n];
        }
    }

    //Loop to print the Transpose of the matrix A

    printf("The transpose of the matrix is: \n");
    for (m=0 ; m < i; m++)
    {
        for (n=0;n<j;n++)
        {
            printf("  ");
            printf("%d",T[m][n]);
            printf("\t");
        }
    printf("\n");
    }
    printf("\n");
    //Loop to find the sum of the diagonla elements
    for (m=0;m<i;m++)
    {
        sum+=A[m][m];
    }
    printf("The sum of the diagonal elements are: %d",sum);
}
