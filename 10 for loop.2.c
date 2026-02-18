#include <stdio.h>

int main() {
  int N;
  int data;
  int total_data=0;
  int high_data=0;
  scanf("%d",&N);
  
  for(int i=0;i<N;i++)
  {
      scanf("%d",&data);
      total_data+=data;
     
  if(data>2)
  {
      high_data++;
  }
  }
    printf("total_data:%d\n",total_data);
    printf("high usage data:%d",high_data);

    return 0;
}