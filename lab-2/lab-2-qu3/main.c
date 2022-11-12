#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;
//حطيت لكل واحده %d
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C)
        printf("%d is the largest number.", A);

  else if (B >= A && B >= C)
        printf("%d is the largest number.", B);

   else if (C >= A && C >= B)
        printf("%d is the largest number.", C);

    return 0;
}
