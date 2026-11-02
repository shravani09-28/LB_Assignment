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
//           Accept a number N from the user and print 
//           all odd numbers up to N.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept upper limit as iNo
        If iNo is less than 1, stop execution
        Iterate counter loop i from 1 to iNo with step size of 2
            Print current value of i followed by space
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

void OddDisplay(int iNo)
{
    if (iNo < 1) return;
    for (int i = 1; i <= iNo; i += 2) // Step by 2 loop optimization
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

