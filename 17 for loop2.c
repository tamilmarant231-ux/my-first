#include<stdio.h>
int main()
{
    int N;
    int deliviries;
    int delayed_deliviries=0;
    int totaldelay=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&deliviries);
        totaldelay+=deliviries;
        
        if(deliviries>30)
        {
            delayed_deliviries++;
        }
    }
    printf("Total delay:%d\n",totaldelay);
    printf("Delayed deliviries:%d",delayed_deliviries);
    return 0;
}