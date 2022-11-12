#include <stdio.h>
#include <stdlib.h>
//C Program to swap 2 integer values. (Swap function, calling by address)
void swap (int *,int *)
int main()
{
   int x = 0, y = 0;
    printf("Enter number1 : ");
    scanf("%d", &x);
    printf("Enter number2 : ");
    scanf("%d", &y);

    printf("You Entered x=%d, y=%d\n",x,y);

    swap(&x, &y);
    printf("After Swapping x=%d, y=%d\n", x, y);
}
void swap (int *ptrx ,int *ptry)
{
  temp ='0';
  temp =*ptrx;
  *ptrx =*ptry;
  *ptry =temp;


}
