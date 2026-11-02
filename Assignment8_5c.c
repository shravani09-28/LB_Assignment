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
//           Accept a number from the user and display 
//           its multiplication table in reverse order.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        If iNo is negative, convert it to positive
        Iterate loop counter i from 10 down to 1
            Print (iNo * i) followed by space
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

void TableRev(int iNo)
{
    if (iNo < 0) iNo = -iNo;

    for (int i = 10; i >= 1; i--)
    {
        printf("%d ", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

///////////////////////////////////////////////////
