#include <stdio.h>

// Function to check if a number is a member of the Fibonacci series
int isFibonacci(int num) {
    int a = 0, b = 1, c;
    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }
    if (b == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (isFibonacci(i)) {
            printf("+");
        } else {
            printf("-");
        }
        if (i != n) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
