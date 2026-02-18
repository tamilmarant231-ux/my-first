#include <stdio.h>
int main() {
  int N;
  int amount;
  int totalamount=0;
  scanf("%d",&N);
  scanf("%d",&amount);
  for(int i=1;i<N;i++)
  {
      totalamount=totalamount+amount;
  }
  printf("%d",totalamount);
  return 0;
}