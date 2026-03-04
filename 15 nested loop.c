#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = 0; i < rows; i++) {
        
        for(int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        for(int star = 0; star < 2*i + 1; star++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}