#include <stdio.h>
int main() {
  int N;
  int mark;
  int sum=0;
  int failed_subject=0;
  scanf("%d",&N);
  
  for(int i=0;i<N;i++)
  {
      scanf("%d",&mark);
      sum+=mark;
  
  if(mark<40)
  {
      failed_subject++;
  }
  }
  int average=sum/N;
      printf("averagescore:%d\n",average);
      printf("failedsubject:%d",failed_subject);
  
    return 0;
}
