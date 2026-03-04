#include <stdio.h>
int main() 
{
    int n,target;
    scanf("%d",&n);
    int price[n];
    for(int i=0;i<n;i++) 
     scanf("%d",&price[i]);
     scanf("%d",&target);
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++)
        {
            if(price[i]+price[j]==target) 
            {
                printf("%d %d\n",price[i],price[j]);
                return 0;
            }
        }
    }
    printf("No pair");
    return 0;
}