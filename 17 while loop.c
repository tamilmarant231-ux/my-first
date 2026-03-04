#include <stdio.h>

int main() {
    int N;
    int wallet_balance;
    int purchase_amount;
    int successful_purchase=0;
    int i=0;
    scanf("%d",&wallet_balance);
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&purchase_amount);
        if(wallet_balance>=purchase_amount)
        {
            wallet_balance-=purchase_amount;
            successful_purchase++;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("Successful purchases:%d\n",successful_purchase);
    printf("Final balance:%d",wallet_balance);
    return 0;
}