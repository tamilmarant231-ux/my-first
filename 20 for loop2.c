#include<stdio.h>
int main()
{
    int totaldata,N;
    int usage;
    int successfulldays=0;
    scanf("%d",&totaldata);
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&usage);
        
        if(totaldata>=usage)
        {
            totaldata-=usage;
            successfulldays++;
        }
        else
        {
            break;
        }
    }
    printf("Remaining data:%d\n",totaldata);
    printf("Successful Days:%d",successfulldays);
    
    return 0;
}