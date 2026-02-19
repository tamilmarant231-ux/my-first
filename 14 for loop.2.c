#include <stdio.h>
int main() {
  int N;
  int revenue;
  int total_revenue=0;
  int target_days=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
      scanf("%d",&revenue);
      total_revenue=revenue+total_revenue;
      if(revenue>50000)
      {
          target_days++;
      }
  }
  printf("total revenue:%d\n",total_revenue);
  printf("target days:%d",target_days);
    return 0;
}