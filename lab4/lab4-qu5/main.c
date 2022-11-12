#include <stdio.h>
#include <stdlib.h>

int main()
{
       char arr[15] = {"kaaamal"}, check = '+';
    int i = 0, r = 0, repeatedAlphabet = 1;

    for(i=0; arr[i] != '\0'; i++)
    {
        for(r=i+1; arr[j] != '\0'; r++)
        {
            if(arr[i] == arr[r] && (arr[i] != arr[check]))
            {
                repeatedAlphabet++;
                check = i;
            }
            else if(check == i)
            {
                r++;
            }
        }

        if(repeatedAlphabet > 1)
        {
            printf("character %c repeated %d time(s)\n", arr[i], repeatedAlphabet);
        }
        else if(repeatedAlphabet == 1 && (arr[i] != arr[check]))
        {
            printf("character %c is not repeated\n", arr[i]);
        }
        repeatedAlphabet = 1;
    }
    return 0;
}
