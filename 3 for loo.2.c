#include <stdio.h>
int main() 
{
    int N,units;
    int totalunits=0;
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%d",&units);
        totalunits+=units;
    }
    printf("total units:%d",totalunits);
   return 0;
}