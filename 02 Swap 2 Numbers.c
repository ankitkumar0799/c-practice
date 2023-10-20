#include <stdio.h>
int main(){
    double first,second,temp;
    printf("\n enter number for a:");
    scanf("%lf",&first);
    printf("\n enter number for b:");
    scanf("%lf",&second);
    temp = first;
    first = second;
    second = temp;
    printf("\n after swaping values is for first : %.2lf",first);
    printf("\n after swaping values is for second : %.2lf",second);

    return 0;
}