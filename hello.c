#include<stdio.h>
int main() {
    int n, i;
    float sum =0 , mean ;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    mean = sum / n;
  
    float sumMean = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] >= mean) {
            sumMean += arr[i];
        }
    }
    printf("%d", (int) sumMean);

    return 0;
}












/*#include<stdio.h>
int main(void){ //sum of n numbers specified
    int m, i, sum, num;
    scanf("%d",&m);
    sum = 0;
    for (i=0; i<m; i++){
        scanf("%d",&num);
        sum += num;
    }
    printf("sum of the give %d numbers is %d",m ,sum);
}
for is easier to read than while loop and
 also involves less lines of code than while loop
#include<stdio.h>
int main()
{                                       //matrix problem in for loop
    int i,j;                            //i for row and j for column
    int n;                              //dimension
    int a;                              //current matrix entry
    float trace = 0.0;
    scanf("%d",&n);                     //read dimension of the matrix
    for (i=0; i<n; i++){
        for (j=0;j<n;j++){
            scanf("%d",&a);
            if ( i==j)                   //since there is only a single statement there is no need for the curly braces
                trace +=a;
            
        }
    }
    printf("%f",trace);
    return 0;
}
#include<stdio.h>
int iscoprime(int a, int b){
    int t;
    if (a < b){t=a; a=b; b=t;}
    while (!(b==-0)){
        t=b;
        b = a%b;
        a=t;
    }
    if (a==1){return 1;}
    else return 0;}
int main(){
    int prev, curr;
    int i,n;
    int count =0;
    scanf("%d",&n);
    scanf("%d",&prev);
    for (i=0; i<n; i++){
        scanf("%d", &curr);
        count += iscoprime(prev,curr);
        prev = curr;
    }
}

*/