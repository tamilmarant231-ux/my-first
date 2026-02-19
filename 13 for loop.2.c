#include <stdio.h>
int main() {
    int N;
    int error;
    int total_error=0;
    int critical_hours=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&error);
        total_error=error+total_error;
        if(error>50)
      {
        critical_hours++;
      }
     }
    printf("total_error:%d\n",total_error);
    printf("critical_hours:%d",critical_hours);
    
    return 0;
}