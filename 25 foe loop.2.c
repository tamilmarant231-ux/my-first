#include <stdio.h>

int main() {
    int N,i;
    int rate;
    int maxRate=0;
    int dangerCount=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&rate);
        if(rate>maxRate)
        {
            maxRate=rate;
        }
        if(rate>140)
        {
            dangerCount++;
        }
    }
    printf("max heart rate:%d\n",maxRate);
    printf("danger readings:%d",dangerCount);
    
    return 0;
}