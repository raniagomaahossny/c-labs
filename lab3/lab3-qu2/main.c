#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("1 for mango, 2 for orange, 3 for frabe : ");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("mango\n");
        break;
        case 2:
            printf("orange");
            break;
        case 3:
            printf("frabe");
            break;
    }
    return 0;
}
