#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int matrix[a][b];
    for(int i=0;i<a;i++)
        for(int j=0;j<b;j++)
            scanf("%d",&matrix[i][j]);
    int maxVal=matrix[0][0];
    int maxFreq = 0;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            int count=0;
            for(int x=0;x<a;x++)
            {
                for(int y=0;y<b;y++)
                {
                    if(matrix[x][y]==matrix[i][j])
                        count++;
                }
            }
            if(count > maxFreq)
            {
                maxFreq=count;
                maxVal=matrix[i][j];
            }
        }
    }

    printf("%d",maxVal);
    return 0;
}