#include <stdio.h>
int main() {
  int A,B,lcm;
  scanf("%d %d",&A,&B);
  for (lcm=(A>B?A:B); ;lcm++)
  {
      if(lcm%A==0&&lcm%B==0)
      {
          printf("%d",lcm);
          break;
      }
  }
  return 0;
}