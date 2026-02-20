#include <stdio.h>

int main() {
  int capacity,N;
  int items,i;
  int overflowcount=0;
  scanf("%d",&capacity);
  scanf("%d",&N);
  for(int i=0;i<N;i++){
      scanf("%d",&items);
      capacity-=items;
      if(capacity<0){
         overflowcount++;
      }
  }
  printf("Remaining Capasity:%d\n",capacity);
  printf("over flow days:%d",overflowcount);
 
    return 0;
}