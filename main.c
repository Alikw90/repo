#include <stdio.h>

int main()
{
    printf("Enter a Number: ");
    int number;
    scanf("%d", &number);
    while (number <= 0)
    {
        printf("Please Enter a Number > 0 \n");
        printf("Enter a Number: ");
        scanf("%d", &number);
    }
    int step=1;
    while (step <= number)
    {
        for (int j=0;j<step;j++)
        {
            printf("*");
        }
        printf("\n");
        step++;
    }

    return 0;
}

