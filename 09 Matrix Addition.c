#include <stdio.h>
int main(){
    int sum[2][2], i,j;

    int a[2][2] = {2,3,4,7};
    int b[2][2] = {4,3,2,6};
    for ( i = 0; i < 2; i++)
    {
        sum[i][j] = a[i][j] + b[i][j];
    }
    
    printf("\n sum of two matriex : ");
    for ( i = 0; i < 2; ++i)
    for (j  = 0; j < 2; ++j)
    {
        printf("%d  ", sum[i][j]);
        if (j == 1)
        {
            printf("\n\n");
        }
        
    }
    
    
        
    
    return 0;
}