#include<stdio.h>
#include<math.h>
int main(){
    int a1,a2,b1,b2,c1,c2,x,y;
    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &c1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    scanf("%d", &c2);
    x=(((c1*b2)-(c2*b1))/((b2*a1)-(b1*a2)));
    printf("%d ", x);
    y=(((c1-(a1*x))/b1));;
    printf("%d", y);
    return 0; 
}
