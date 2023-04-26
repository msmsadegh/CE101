#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, space, star;

    printf("Enter the number of rhombuses to print (1-4): \n");
    scanf("%d", &m);

    printf("Enter the diameter of each rhombus (odd number between 1-15): \n");
    scanf("%d", &n);
    system("clear");
    if (n % 2 == 0) {
        printf("Diameter must be an odd number!\n");
        return 1;
    }
    for(int i =0; i < n; i++){
        for(int t = 0; t < m; t++){
            star = n -2 * abs(m -i);
            space = abs(m - i);
            for(int k = 0; k < space;k++)
                printf(" ");
            for(int k = 0; k < star; k++)
                printf("*");
            for(int k = 0; k < space; k++)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


