#include <stdio.h>

int main() {
    int s, i;
    int count[26] = {0};

    scanf("%d", &s);
    
    char a1[s], a2[s];
    scanf("%s", a1);
    scanf("%s", a2);

    for (i = 0; i < s; i++) {
        count[a1[i] - 'A']++;
        count[a2[i] - 'A']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}
