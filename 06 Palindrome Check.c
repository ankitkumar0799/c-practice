#include <stdio.h>
#include <string.h>
int main(){
    char ch[20];
    int i,length;
    int flag = 0;

    printf("enter a string : ");
    scanf("%s",ch);

    length = strlen(ch);


    for ( i = 0; i < length; i++)
    {
       if (ch[i] != ch[length - i -1])
       {
        flag = 1;
        break;
       }
       
    }
    if (flag == 1)
    {
        printf("%s is not a palindrom",ch);
    }else{
        printf("%s is a palindrom",ch);
    }
    
    

    return 0;
}