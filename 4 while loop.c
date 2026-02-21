#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int statuses[N];
    int i = 0;
    while (i < N) 
    {
        scanf("%d", &statuses[i]);
        i++;
    }
    int current_streak = 0;
    int max_streak = 0;
    i = 0;
    while (i < N) {
        if (statuses[i] == 0) 
        {
            current_streak++;
            if (current_streak > max_streak) 
            {
                max_streak = current_streak;
            }
        } else 
        {
            current_streak = 0;
        }
        i++;
    }
    printf("Longest Failure Streak: %d\n", max_streak);
    return 0;
}s