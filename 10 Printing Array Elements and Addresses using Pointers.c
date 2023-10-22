#include <stdio.h>
int main(){
    int arr[10];
    int *poin;
    int i;

    poin = &arr[0];
    printf("enter array element");
    for ( i = 0; i < 10; i++)
    {
        printf("enter element %02d: ",i + 1);
        scanf("%d",poin + i);
    }

    printf("entered array are:");
    printf("\n address \t value\n");
    for ( i = 0; i < 10; i++)
    {
        printf("%08X \t %03d\n",(poin + i),*(poin + i));
    }
    

    
    return 0;
}