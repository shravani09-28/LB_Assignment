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
//           Accept a number from the user and calculate 
//           its factorial.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        Initialize result iFact to 1
        If iNo is negative, convert it to positive
        Iterate loop counter i from 1 to iNo
            Multiply iFact by i
        Return iFact
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

// Time Complexity: O(|N|)
// Auxiliary Space Complexity: O(1)
int Factorial(int iNo)
{
    int iFact = 1;
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i <= iNo; i++)
    {
        iFact *= i;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////
