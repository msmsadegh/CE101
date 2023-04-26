#include <stdio.h>

unsigned char rightrot(unsigned char x, unsigned char n) {
    return (x >> n) | (x << (8 - n));
}

int main() {
    unsigned char x, n, result;
    printf("Enter the initial value: ");
    scanf("%hhu", &x);
    printf("Enter the number of positions to rotate: ");
    scanf("%hhu", &n);
    result = rightrot(x, n);
    printf("Result: %hhu\n", result);
    return 0;
}
