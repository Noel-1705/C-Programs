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