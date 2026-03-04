#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int stops[n];
    for(int i = 0;i<n; i++)
        scanf("%d",&stops[i]);
    for(int i=0; i<n/2;i++) {
        int temp=stops[i];
        stops[i]=stops[n-1-i];
        stops[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",stops[i]);
    return 0;
}