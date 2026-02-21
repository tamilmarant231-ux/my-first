#include <stdio.h>
int main()
{
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);
    int trips[N];
    int i = 0;
    while (i < N)
    {
        scanf("%d", &trips[i]);
        i++;
    }
    int completed = 0;
    i = 0;
    while (i < N)
    {
        if (fuel >= trips[i])
        {
            fuel -= trips[i];
            completed++;
        } else {
            break;  
        }
        i++;
    }
    printf("Completed Trips: %d\n", completed);
    printf("Remaining Fuel: %d", fuel);
    return 0;
}