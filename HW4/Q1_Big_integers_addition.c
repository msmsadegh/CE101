#include <stdio.h>
#include <string.h>
char s1 [110], s2 [110];
int a[110], b[110], c[110];
int main() {
    scanf("%s", s1);
    scanf(" %s", s2);
    for (int i = 0, j = strlen(s1) - 1; j >= 0; j--, i++) {
        a[i] = s1[j] - '0';
    }
    for (int i = 0, j = strlen(s2) - 1; j >= 0; j--, i++) {
        b[i] = s2[j] - '0';
    }
    for (int i = 0; i <= 101; i++) {
        c[i] += a[i] + b[i];
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    int start = 105;
    while (c[start] == 0) start--;
    for (int i = start; i >= 0; i--) printf("%d", c[i]);
    return 0;
}

