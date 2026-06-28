#include <stdio.h>

void count_up(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void) {
    count_up(10);
    return 0;
}

