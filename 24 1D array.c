#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int Unique=1; 
    for(int i=0;i<N-1;i++) 
    {
        for(int j=i+1;j<N;j++) 
        {
            if(arr[i]==arr[j])
            {
                Unique=0;
                break;
            }
        }
        if(Unique==0) 
        {
            break;
        }
    }
    if(Unique)
        printf("Yes\n");
    else
        printf("No");
    return 0;
}