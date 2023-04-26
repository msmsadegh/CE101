#include <stdio.h>

#define TARGET 200  // target amount in pence
#define COINS 8  // number of coin types
#define MAX_COINS 1000  // maximum number of coins

int main() {
    int coin_sizes[COINS] = {1, 2, 5, 10, 20, 50, 100, 200};  // coin sizes in pence
    int ways[MAX_COINS] = {1};  // initialize table with one way to make zero pence
    int i, j;

    for (i = 0; i < COINS; i++) {
        for (j = coin_sizes[i]; j <= TARGET; j++) {
            ways[j] += ways[j - coin_sizes[i]];
        }
    }

    printf("Number of ways to make Â£2: %d", ways[TARGET]);

    return 0;
}