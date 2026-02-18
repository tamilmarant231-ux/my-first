#include <stdio.h>
int main() {
  int N;
  int loss;
  int highloss=0;
  int totalloss=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++)
  {
     scanf("%d",&loss);
     totalloss=totalloss+loss;
     

     if(loss>100)
     {
        highloss++;
     }
  }
  
    printf("totalloss:%d\n",totalloss);
    printf("highloss:%d",highloss);

    return 0;
}
