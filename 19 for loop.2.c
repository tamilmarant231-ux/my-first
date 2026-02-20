#include <stdio.h>

int main() {
    int N,i;
    int noise;
    int maxNoise;
    int noisyCount=0;
    scanf("%d",&N);
    scanf("%d",&noise);
    maxNoise=noise;
    if(noise>70){
        noisyCount++;
    }
    for(int i=1;i<N;i++){
        scanf("%d",&noise);
        if(noise>maxNoise){
            maxNoise=noise;
        }
        if(noise>70){
            noisyCount++;
        }
    }
    printf("Maximun Noise:%d\n",maxNoise);
    printf("Noisy periods:%d",noisyCount);
 
    return 0;
}