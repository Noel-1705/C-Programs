#include <stdio.h>

int collatz(int n, int c) {
    if (n == 1)
        return c;
    if (n % 2 == 0)
        return collatz(n / 2, c + 1);
    else
        return collatz(3 * n + 1, c + 1);
}
int main() {
    int num;
    scanf("%d", &num);
    if (num <= 0) {
        return 1;
    }
    int c = collatz(num, 0);
    printf("%d", c);
    return 0;
}

