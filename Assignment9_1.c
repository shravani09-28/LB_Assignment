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
//           Accept a number from the user and print 
//           that many '*' characters followed by the same 
//           number of '#' characters on the screen.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept count as iNo
        If iNo is negative, convert it to positive
        Iterate loop i from 1 to iNo:
            Print "* "
        Iterate loop i from 1 to iNo:
            Print "# "
        Print newline character
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

void Display(int iNo)
{
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i <= iNo; i++)
    {
        printf("* ");
    }
    for (int i = 1; i <= iNo; i++)
    {
        printf("# ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////
