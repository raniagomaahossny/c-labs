#include <stdio.h>
#include <stdlib.h>

int maxof3(int,int,int);

int main()
{
    return 0;
}


int maxof3(int a,int b,int c)
{
    if (a>b &&a>c)
        return a;

  else if (b>a &&b>c)
        return b;


   else if (c>b &&c>b)
        return c;
}
