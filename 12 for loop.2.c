#include <stdio.h>
int main() {
    int N;
    int price;
    int highest_price=0;
    int high_price_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&price);
        if(price>highest_price)
    {
        highest_price=price;
    }
    if(price>100)
    {
        high_price_days++;
    }
    }
    printf("highest_price:%d\n",highest_price);
    printf("high_price_days:%d",high_price_days);

    return 0;
}