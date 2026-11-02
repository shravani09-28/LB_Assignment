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
//           that many pairs of "$ *" patterns on the screen.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept count as iNo
        If iNo is negative, convert it to positive (iLimit)
        Initialize counter loop from 1 to iLimit
            Print "$ * "
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

void Pattern(int iNo)
{
    int iLimit = (iNo < 0) ? -iNo : iNo; // Optimizing negative inputs
    for (int i = 1; i <= iLimit; i++)
    {
        printf("$ * ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

