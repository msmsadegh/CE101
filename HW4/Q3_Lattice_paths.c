#include <stdio.h>

long double factorial(int n);

int main()
{
    int m, n;
    scanf("%d\n%d", &m, &n);
    long double result = factorial(m+n) / (factorial(m) * factorial(n));
    printf("%.0Lf\n", result);
    return 0;
}
long double factorial(int n)
{
    long double result = 1;
    for (int i = 2; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}