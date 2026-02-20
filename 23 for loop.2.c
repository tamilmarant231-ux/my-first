#include <stdio.h>

int main() {
  int N,i;
  int units;
  int total=0;
  int spikeCount=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
      scanf("%d",&units);
      total +=units;
      if(units>5)
      {
          spikeCount++;
      }
  }
  printf("total units:%d\n",total);
  printf("spike hours:%d",spikeCount);
  
    return 0;
}