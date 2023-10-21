#include <stdio.h>
int main(){

    // HALF STAR PIRAMID
    // int i,j,rows;

    // printf("\n enter the number of rows");
    // scanf("%d",&rows);

    // for ( i = 1; i <= rows; i++)
    // {
    //     for ( j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
        
    // }
    


    // FULL STAR PIRAMID
    int i,j,rows, k;

    printf("enter your number of rows");
    scanf("%d",&rows);

    for (i = 1; i <= rows; i++,k=0)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
    return 0;
}