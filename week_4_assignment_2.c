#include <stdio.h>

int main() {
    int s1, s2, i, j, smallest = -1;
    scanf("%d", &s1);
    int arr1[s1];
    for (i = 0; i < s1; i++) scanf("%d", &arr1[i]);
    scanf("%d", &s2);
    int arr2[s2];
    for (i = 0; i < s2; i++) scanf("%d", &arr2[i]);
    for (i = 0; i < s1; i++)
        for (j = 0; j < s2; j++)
            if (arr1[i] == arr2[j] && (smallest == -1 || arr1[i] < smallest)) smallest = arr1[i];
    printf("%d", smallest);
    return 0;
}
