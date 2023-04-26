#include <stdio.h>
int main()
{
    int i;
    int c;
    for(i=0;i<100;i++){
        c = getchar();
        if (c == '\n')
            break;
        c = (c>=65 && c <= 90) ? (c = c + 32) : c;
        putchar(c);
    }
    printf("\n");
}
