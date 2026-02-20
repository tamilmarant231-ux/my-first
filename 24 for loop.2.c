#include <stdio.h>

int main() {
    int N,i;
    int calls;
    int totalCalls=0;
    int overloadedHours=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&calls);
        totalCalls+=calls;
        if(calls>40)
        {
            overloadedHours++;
        }
    }
    printf("total calls:%d\n",totalCalls);
    printf("overloaded hours:%d",overloadedHours);
    return 0;
}