#include<stdio.h>
int main()
{
    int max_weight;
    int N;
    int weight;
    int totalweight=0;
    int count=0;
    int i=0;
    scanf("%d",&max_weight);
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&weight);
        if(totalweight+weight>max_weight)
        {
            break;
        }
        totalweight+=weight;
        count++;
        i++;
    }
    printf("people entered:%d\n",count);
    if(count<N)
    {
        printf("overloadstatus:yes");
    }
    else
    {
        printf("overload status:no");
    }
    
    return 0;
        
}