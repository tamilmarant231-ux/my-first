#include <stdio.h>

int main() {
  int N,count=0;
  scanf("%d",&N);
  
  for(int i=2;i<=N;i++)
  {
      int Prime=1;
      
      for(int j=2;j<=i/2;j++)
      {
          if(i%j==0)
          {
              Prime=0;
              break;
          }
      }
      if (Prime==1)
      {
          count++;
      }
  }
  printf("%d",count);
    
  return 0;
}