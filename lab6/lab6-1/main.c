#include <stdio.h>
#include <stdlib.h>
#define r 3
int main()
{
    nt arr[r] = {0};
    int i = 0;
    int * ptr = arr;
    printf("Enter Array data\n");
    for(i=0; i<r; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
     for(i=0; i<r; i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr+i));
    }

    return 0;
}
