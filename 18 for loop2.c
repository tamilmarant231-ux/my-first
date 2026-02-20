#include<stdio.h>
int main()
{
    int N,i;
    int hours;
    int totalhours=0;
    int heavydays=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&hours);
        totalhours+=hours;
        
        if(hours>3)
        {
            heavydays++;
        }
    }
    int overtimecost=totalhours*200;
    printf("Total over time hours:%d\n",totalhours);
    printf("overtime cost:%d\n",overtimecost);
    printf("heavy over time days:%d",heavydays);
    
    return 0;
}