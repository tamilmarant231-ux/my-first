#include<stdio.h>
int main()
{
    int Totalamount;
    int N;
    int amount;
    int risk_count=0;
    scanf("%d",&Totalamount);
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&amount);
        Totalamount-=amount;
        
        if(Totalamount<5000)
        {
            risk_count++;
        }
        
    }
    printf("Remaining cash:%d\n",Totalamount);
    printf("Risk count:%d",risk_count);
    return 0;
}