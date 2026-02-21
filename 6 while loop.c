#include <stdio.h>
int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    int weights[N];
    int i = 0;
    while (i < N) 
    {
        scanf("%d", &weights[i]);
        i++;
    }
    int totalWeight = 0;
    int allowed = 0;
    int overload = 0;
    i = 0;
    while (i < N) 
    {
        totalWeight += weights[i];

        if (totalWeight > maxWeight) 
        {
            overload = 1;
            break;
        }

        allowed++;
        i++;
    }
    printf("Passengers Allowed: %d\n", allowed);

    if (overload)
        printf("Overload: Yes\n");
    else
        printf("Overload: No");

    return 0;
}