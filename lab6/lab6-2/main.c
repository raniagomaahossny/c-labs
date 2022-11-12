#include <stdio.h>
#include <stdlib.h>

int power(int, int);
int main()
{
   int x = 0;
    x = power(10,4);
    printf("%d\n", x);

      int power(int n, int pow)
{
    static int result = 1;
    if(pow >= 1)
       {
           result = result*n;
           pow--;
           return power(n,pow);
       }
    else
       {
    return 0;
}
