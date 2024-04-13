#include<stdio.h>
int main(void){
    int note_100;
    int note_10;
    int coin_1;
    int price;
    int sum;

    scanf("%d",&note_100);
    scanf( "%d", &note_10 );
    scanf("%d", &coin_1);
    scanf("%d", &price);
    note_100= note_100*100;
    note_10= note_10*10;

    sum = (note_100 + note_10 +coin_1);
    if (sum>=price){
        printf("1");
    }
    else {printf("0");}
}