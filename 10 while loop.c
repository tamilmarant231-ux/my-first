#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int hours[N];
    int i = 0;
    while (i < N) 
    {
        scanf("%d", &hours[i]);
        i++;
    }
    int inactiveWeeks = 0;
    i = 0;
    while (i < N) 
    {
        if (hours[i] == 0)
        {
            inactiveWeeks++;
        }
        i++;
    }
    printf("Inactive Weeks: %d\n", inactiveWeeks);
    if (inactiveWeeks >= 3) 
    {
        printf("Risk Status: High\n");
    } else {
        printf("Risk Status: Low");
    }
    return 0;
}