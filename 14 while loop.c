#include <stdio.h>

int main() 
{
    int N,i=0;
    int total_amount;
    int amount_withdraws;
    int successfull_withdraws=0;
    scanf("%d",&total_amount);
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&amount_withdraws);
        if(total_amount>=amount_withdraws)
        {
            total_amount-=amount_withdraws;
            successfull_withdraws++;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("Successfull withdraws:%d\n",successfull_withdraws);
    printf("Remaining cash:%d",total_amount);
    
    return 0;
}