#include <stdio.h>
int main() {
  int N;
  int rainfall;
  int totalrainfall=0;
  int heavyrainfall=0;
  scanf("%d",&N);
  for(int i=1;i<N;i++)
  {
       scanf("%d",&rainfall);
       totalrainfall=totalrainfall+rainfall;
     
  
       if(rainfall>50)
       {
         heavyrainfall++;
       }
}
  printf("total rainfall:%d\n",totalrainfall);
  printf("heavy rainfall:%d",heavyrainfall);
  return 0;
}