#include <stdio.h>

#define MAX_CHARS 128  // Maximum number of characters to count

int main() {
    int c;
    int char_counts[MAX_CHARS] = {0};  // Initialize all counts to zero

    // Read characters from input and count their frequencies
    while ((c = getchar()) != EOF) {
        if (c < MAX_CHARS) {
            char_counts[c]++;
        }
    }

    // Print the histogram
    for (int i = 0; i < MAX_CHARS; i++) {
        if (char_counts[i] > 0) {
            printf("%c: ", i);
            for (int j = 0; j < char_counts[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}