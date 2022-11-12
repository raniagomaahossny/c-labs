#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y;
    char op;
    printf("plese inter number");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("plese enter operator");
    op=getchar();
    scanf("%c",&op);


    switch (op)
{
    case '+':
       printf("%d %c %d = %d\n",x, op, y, x+y);
       break;

    case'-':
        printf("%d-%d",x-y);
        break;
    case '*':
        printf("%d*%d",x*y);
        break;
    case '/':
        printf("%d/%d",x/y);
        break;
    }














    return 0;
}
