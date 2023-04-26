#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    printf("Perfect numbers between %d and %d are: ", start, end);

    for(int i = start; i <= end; i++) {
        int sum = 0;
        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
