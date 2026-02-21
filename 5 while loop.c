#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int orders[N];
    int i = 0;
    while (i < N) {
        scanf("%d", &orders[i]);
        i++;
    }
    int successful = 0;
    int cancelled = 0;
    i = 0;
    while (i < N) {
        if (orders[i] == 1) {
            successful++;
        } else if (orders[i] == 0) {
            cancelled++;
        }
        i++;
    }
    printf("Successful: %d\n", successful);
    printf("Cancelled: %d\n", cancelled);
    if (cancelled > successful) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe");
    }

    return 0;
}