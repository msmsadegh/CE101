#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    int c, prev;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (state == OUT && c == '/') {
            prev = c;
            c = getchar();
            if (c == '*') {
                state = IN;
            }
            else {
                putchar(prev);
                putchar(c);
            }
        }
        else if (state == IN && prev == '*' && c == '/') {
            state = OUT;
        }
        else if (state == OUT) {
            putchar(c);
        }
        prev = c;
    }

    return 0;
}