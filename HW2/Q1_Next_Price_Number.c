#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;

    for (int i = 2; i <= num/2; ++i) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, prime;
    printf("Enter an integer: ");
    scanf("%d", &n);
    prime = n + 1;
    // Todo: Check wether between -1000 and 1000 or not and handle this
    while (!isPrime(prime)) {
        prime++;
    }

    printf("The first prime number after %d is %d", n, prime);

    return 0;
}
