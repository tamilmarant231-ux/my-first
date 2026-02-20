#include <stdio.h>

int main() {
  int N,i;
  int risk;
  int totalRisk=0;
  int highRiskCount=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
      scanf("%d",&risk);
      totalRisk+=risk;
      if(risk>50)
      {
          highRiskCount++;
      }
  }
  printf("total risk:%d\n",totalRisk);
  printf("high risk sessions:%d",highRiskCount);
 
    return 0;
}