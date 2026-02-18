#include <stdio.h>
int main() {
  int batterypercent;
  int N;
  int drain;
  scanf("%d",&batterypercent);
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
      scanf("%d",&drain);
      batterypercent-=drain;
  }
 
  printf("remaining Battery:%d%%",batterypercent);
  return 0;
}