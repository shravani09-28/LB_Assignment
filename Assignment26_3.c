/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

///////////////////////////////////////////////////
//
//  Step 1 : Understand the problem statement
//           Accept a character from the user. If capital, print all 
//           characters from input up to 'Z'. If small, print all 
//           characters in reverse down to 'a'. Otherwise return directly.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept character ch
        If ch >= 'A' AND ch <= 'Z':
            Loop c from ch to 'Z':
                Print c
        Else If ch >= 'a' AND ch <= 'z':
            Loop c from ch down to 'a':
                Print c
    END
*/
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//  Step 3 : Decide the programming language
//           We select C programming
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//
//  Step 4 : Write the program
//
///////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        while (ch <= 'Z')
        {
            printf("%c\t", ch++);
        }
        printf("\n");
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        while (ch >= 'a')
        {
            printf("%c\t", ch--);
        }
        printf("\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
