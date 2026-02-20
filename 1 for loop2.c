#include<stdio.h>

int main()
{
   int N,expense;
   int total=0,days=0;
   scanf("%d",&N);
   for(int i=0;i<N;i++)
   {
       scanf("%d",&expense);
       total+=expense;
       if(expense>1000)
       {
           days++;
       }
   }
   printf("total expense:%d\n",total);
   printf("days:%d\n",days);
   return 0;
}