#include <stdio.h>
int main() {
  int N;
  int voltage;
  int minimum_voltage;
  int low_voltage_event=0;
  scanf("%d",&N);
  scanf("%d",&minimum_voltage);
  if(minimum_voltage<210)
  {
      low_voltage_event++;
  }
  for(int i=1;i<N;i++)
  {
      scanf("%d",&voltage);
      if(voltage<minimum_voltage)
      {
          minimum_voltage=voltage;
      }
      if(voltage<210)
  {
      low_voltage_event++;
  }
  }
      printf("minimum voltege:%d\n",minimum_voltage);
      printf("low voltage event:%d",low_voltage_event);
      
    return 0;
}