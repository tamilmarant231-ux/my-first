#include <stdio.h>

int main() {
   int N,i;
   int risk,totalrisk=0,highriskcount=0;
   scanf("%d",&N);
   
   for(i=0;i<N;i++)
   {
       scanf("%d",&risk);
       totalrisk+=risk;
       
       if(risk>50)
       {
           highriskcount++;
       }
   }
   printf("Total Risk:%d\n",totalrisk);
   printf("High Risk Session:%d",highriskcount);
   
    return 0;
}