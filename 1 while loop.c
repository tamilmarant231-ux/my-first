#include <stdio.h>

int main() {
    int N;
    int noise;
    int violations=0;
    int currentstreak=0;
    int longeststreak=0;
    scanf("%d",&N);
    int i=0;
    while(i<N)
    {
        scanf("%d",&noise);
        
        if(noise>70)
        {
            violations++;
            currentstreak++;
            
            if(currentstreak>longeststreak)
            {
                longeststreak=currentstreak;
            }
        }
            else
            {
                currentstreak=0;
            }
            i++;
        }
        printf("Noise violations:%d\n",violations);
        printf("Longest violations streak:%d",longeststreak);
        return 0;
}