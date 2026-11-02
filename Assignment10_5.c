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
//           Accept area in square feet from the user and 
//           convert it to square meters (1 Sq Ft = 0.0929 Sq Mtr).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept area in square feet as iValue
        If iValue is negative, return 0.0
        Calculate SquareMeters = iValue * 0.0929
        Return SquareMeters
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

double SquareMeter(int iValue)
{
    if (iValue < 0) return 0.0;
    return (double)iValue * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    printf("Area in square meters is %lf\n", dRet);

    return 0;
}

///////////////////////////////////////////////////
