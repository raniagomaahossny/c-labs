#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    int sum=0;

    do
    {
        printf("enter number",x);
        scanf("%d",&x);
        sum=(sum+x);

      }  while(sum<=100);




    return 0;
}
