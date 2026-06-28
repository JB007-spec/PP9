#include <stdio.h>

const char* sign_of(int x) {
    if (x > 0)
        return "positive";
    else if (x == 0)
        return "zero";
    else
        return "negative";
}

int main(void) {
    printf("%s\n", sign_of(10));
    printf("%s\n", sign_of(0));
    printf("%s\n", sign_of(-5));
    return 0;
}

