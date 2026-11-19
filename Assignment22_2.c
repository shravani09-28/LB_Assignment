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
//           Accept a number N from user and display each 
//           number from N down to 1 followed by '#'.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer count as iNo
        If iNo is negative, convert it to positive
        Iterate loop i from iNo down to 1:
            Print i followed by "#"
        Print newline
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
    int i = 0;

    if (iNo < 0) iNo = -iNo;

    for (i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
