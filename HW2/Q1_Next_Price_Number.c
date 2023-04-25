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
    int inputNum, prime;
    printf("Enter an integer: ");
    scanf("%d", &inputNum);
    prime = inputNum + 1;
    // Check whether between -1000 and 1000 or not and handle this
    if ((-1000 > inputNum) || (inputNum > 1000)){
        printf("Your Entire value is not true");
        return 1;
    }
    while (!isPrime(prime)) {
        prime++;
    }

    printf("The first prime number after %d is %d", inputNum, prime);

    return 0;
}
