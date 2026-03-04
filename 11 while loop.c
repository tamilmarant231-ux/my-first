#include<stdio.h>
int main()
{
    int N,delay;
    int total_delay=0;
    int delayed_days=0;
    scanf("%d",&N);
    int i=0;
    while(i<N)
    {
       scanf("%d",&delay);
       total_delay+=delay;
       if(delay>2)
       {
           delayed_days++;
       }
       i++;
    }
           printf("total delay:%d\n",total_delay);
           printf("delayed days:%d",delayed_days);
    return 0;
    
}