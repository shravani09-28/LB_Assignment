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
//           Accept a number from the user and return the 
//           difference between its even factorial and odd factorial.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        Initialize iEvenFact = 1, iOddFact = 1
        If iNo is negative, convert it to positive
        Iterate loop counter i from 1 to iNo:
            If i is even:
                Multiply iEvenFact by i
            Else:
                Multiply iOddFact by i
        Return (iEvenFact - iOddFact)
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

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iOddFact = 1;
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i <= iNo; i++)
    {
        if ((i & 1) == 0)
        {
            iEvenFact *= i;
        }
        else
        {
            iOddFact *= i;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////
