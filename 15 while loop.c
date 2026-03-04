#include <stdio.h>

int main() {
    int N;
    int time;
    int overtime=0;
    int burnout_days=0;
    int i=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&time);
        overtime=time+overtime;
        if(time>4)
        {
            burnout_days++;
        }
        i++;
    }
    printf("Total over time:%d\n",overtime);
    printf("Burnout Days:%d",burnout_days);
    return 0;
}