#include <stdio.h>
int main() {
  int salary;
  int absentDays;
  int deduction=0;
  scanf("%d",&salary);
  scanf("%d",&absentDays);
  for(int i=1;i<=absentDays;i++)
  {
    deduction=100+deduction;
  }
  salary=salary-deduction;
  printf("final salary:%d",salary);
  return 0;
}