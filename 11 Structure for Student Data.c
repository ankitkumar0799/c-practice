#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
}s[5];

int main(){
    int i;
    printf("enter the info of the student");

    // storinf information
    for (i = 0; i < 5; i++)
    {
        s[i].roll = i + 1;
        printf("for roll no. %d\n",s[i].roll);
        printf("enter the nume of student\n");
        scanf("%s",&s[i].firstName);
        printf("enter the marks\n ");
        scanf("%f",&s[i].marks);

    }
    for ( i = 0; i < 5; i++)
    {
        printf("roll no : %d\n", i + 1);
        printf("name :\n");
        puts(s[i].firstName);
        printf("marks : %.2f\n",s[i].marks);

    }
    
    
    return 0;
}