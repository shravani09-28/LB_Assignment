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
//           its odd factorial (product of all odd numbers 
//           less than or equal to the number).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        Initialize iFact = 1
        If iNo is negative, convert it to positive
        Iterate loop i from iNo down to 1:
            If i is odd (i & 1 != 0):
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

int OddFactorial(int iNo)
{
    int iFact = 1;
    if (iNo < 0) iNo = -iNo;

    for (int i = iNo; i >= 1; i--)
    {
        if ((i & 1) != 0) // Bitwise odd check optimization
        {
            iFact *= i;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////
