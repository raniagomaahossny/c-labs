#include <stdio.h>
#include <stdlib.h>

int main()
{
   int grade;
    printf("Please enter the student grade : ");
    scanf("%d",&grade);

    if(grade>=85)
        printf("Excellent");

    else if(85>grade && grade>=75)

        printf("Very Good");

    else if(75>grade && grade>=65)

        printf("Good");

    else if(65>grade && grade>=50)

        printf("Pass");

    else

        printf("Fail");

    return 0;
}
