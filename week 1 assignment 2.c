#include<stdio.h>
int main(void){
    int a=0;
    int b=0;
    int c=0;
    int t=0;
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    if (a>c){
        t=a;
        a=c;
        c=t;
    }
    if (a>b)
        {
                t=a;
                a=b;
                b=t;}
    if (b>c)
    {
        t=b;
        b=c;
        c=t;

    }
    printf("%d",b);
            }  
            