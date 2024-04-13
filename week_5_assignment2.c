#include <stdio.h>

int blockSum(int a[], int st, int end) {
    if (st + 1 == end)
        return a[st] - a[end];

    int mid = (st + end) / 2;
    return blockSum(a, st, mid) - blockSum(a, mid + 1, end);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d", blockSum(a, 0, n - 1));

    return 0;
}
