#include<stdio.h>
int main(void){
    int prev;
    int curr;
    int count;
    int temp;
    scanf("%d",&prev);
    while (prev != -1){
        scanf("%d",&curr);
        if (prev > curr){
            count ++;
        }
        else if (prev == curr)
        {
            continue;
        }
    printf(count);
        

    }
}
