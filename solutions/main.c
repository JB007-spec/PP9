#include <stdio.h>
#include "flowchart_impl.h"

int main(void) {
    int x;

    printf("´Type a Number: ");
     scanf("%d", &x);

    int result= calculate(x);

    printf("Result: %d\n", result);

    return 0;
}

