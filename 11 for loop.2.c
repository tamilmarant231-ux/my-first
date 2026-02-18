#include <stdio.h>
int main() {
    int N;
    int patients;
    int total_patients=0;
    int overcrowed_days=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&patients);
        total_patients+=patients;
         if(patients>100)
        {
            overcrowed_days++;
        }
    }
        printf("total_patients:%d\n",total_patients);
        printf("overcrowed_days:%d",overcrowed_days);
    
    return 0;
}