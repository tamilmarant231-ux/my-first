#include<stdio.h>
int main()
{
    int N;
    int datapack;
    int datausage;
    int day=0;
    scanf("%d",&datapack);
    scanf("%d",&N);
    while(day<N&&datapack>0)
    {
        scanf("%d",&datausage);
        datapack=datapack-datausage;
        day++;
    }
    if(datapack<=0)
    {
        printf("Exhausted Day:%d\n",day);
        printf("Overused Data:%d\n",-datapack);
    }
    else
    {
        printf("Data not exhausted");
    }
    return 0;
        
}