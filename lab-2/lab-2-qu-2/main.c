#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, rem1;

    /*int x=5, y=6;
    if(x == y)
    {
        printf("yes\n");
    }
        if(x != y)
    {
        printf("yes\n");
    }*/

    printf("Input an integer : ");
    scanf("%d", &num1);
    rem1 = num1 % 2;
    if (rem1 == 0)
        printf("%d is an even integer\n", num1);
    else
        printf("%d is an odd integer\n", num1);
        return 0;
}

