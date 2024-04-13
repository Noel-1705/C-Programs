#include <stdlib.h>
#include <stdio.h>

void two_moving_average() {
    int num1, num2;
    int prev = -1;
    int first_iteration = 1;

    while (1) {
        scanf("%d", &num1);
        
        if (num1 == -1) {
            break;
        }
        
        if (first_iteration) {
            prev = num1;
            first_iteration = 0;
            continue;
        }
        
        scanf("%d", &num2);
        if (num2 == -1) {
            break;
        }
        printf("%.1f ", (prev + num1) / 2.0);
        prev = num2;
    }
}

int main() {
    two_moving_average();
    return 0;
}

