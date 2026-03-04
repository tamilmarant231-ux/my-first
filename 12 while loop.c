#include <stdio.h>

int main() {
    int N,i=0;
    int usage;
    int max_usage=0;
    int surge_count=0;
    scanf("%d",&N);
    while(i<N)
    {
        scanf("%d",&usage);
        if(usage>max_usage)
        {
            max_usage=usage;
        }
        if(usage>5)
        {
            surge_count++;
        }
        i++;
    
    }
    printf("Max Usage:%d\n",&max_usage);
    printf("surge count:%d",&surge_count);
    return 0;
}