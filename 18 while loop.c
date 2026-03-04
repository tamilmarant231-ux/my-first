#include <stdio.h>

int main() {
    int capacity,N;
    int load;
    int safe_hours=0;
    int failure_count=0;
    int i=0;
    scanf("%d",&capacity);
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&load);
        if(load<=capacity)
        {
            safe_hours++;
        }
        else
        {
            failure_count++;
        }
        i++;
    }
    printf("Safe hours:%d\n",safe_hours);
    printf("Failure Count:%d",failure_count);
    return 0;
}