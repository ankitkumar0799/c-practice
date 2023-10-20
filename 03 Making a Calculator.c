#include <stdio.h>
int main()
{
    char op;
    double first, second;

    printf("\n enter an opreator (+,-,/,*)");
    scanf("%c", &op);
    printf("\n enter teo number");
    scanf("%lf %lf", &first, &second);
    switch (op)
    {
    case '+':
        printf("\n%.1lf of %.1lf is %.1lf", first, second, first + second);
        break;
    case '-':
        printf("\n%.1lf of %.1lf is %.1lf", first, second, first - second);
        break;
    case '*':
        printf("\n%.1lf of %.1lf is %.1lf", first, second, first * second);
        break;
    case '/':
        printf("\n%.1lf of %.1lf is %.1lf", first, second, first / second);
        break;
    default:
        printf("error oprator is not correct");
    }

    return 0;
}