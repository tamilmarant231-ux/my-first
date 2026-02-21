#include <stdio.h>
int main() {
    int totalData, N;
    scanf("%d", &totalData);
    scanf("%d", &N);

    int usage[N];
    
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &usage[i]);
    }
    int daysUsed = 0;
    int i = 0;
    while (i < N && totalData >= usage[i]) 
    {
        totalData -= usage[i];
        daysUsed++;
        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);

    return 0;
}