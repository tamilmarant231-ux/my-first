#include <stdio.h>
int main() 
{
    int n,i,isPrime=1;
    scanf("%d",&n);
    for(i=2;i<=n/3;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime==1)
    {
        printf("prime");
    }
    else
    {
        printf("Not prime");
    }
   return 0;
}