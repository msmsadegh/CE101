#include <stdio.h>

int main() {
    int number, reverse = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    // Reversing the number
    while(temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if(number == reverse) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}
