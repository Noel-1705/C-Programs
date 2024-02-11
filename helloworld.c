#include<stdio.h>
int main(void){
    int a;
    int count = 0;
    scanf("%d",&a);
    while (a != -1){
        if (a == 1){
            count ++;
            }
        scanf("%d",&a);
        }
    if (count % 2 ==0){
        printf("1");
    }
    else {
        printf("0");
    }
    } 