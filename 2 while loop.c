#include <stdio.h>

int main() {
    int N,i=0;
    int initial_balance,transaction;
    int lowbalancedays=0;
    scanf("%d",&N);
    scanf("%d",&initial_balance);
    while(i<N)
    {
        scanf("%d",&transaction);
        initial_balance+=transaction;
        
        if(initial_balance<2000)
        {
            lowbalancedays++;
        }
        i++;
    }
    printf("Final Balance:%d\n",initial_balance);
    printf("Low balance days:%d",lowbalancedays);
    

    return 0;
}