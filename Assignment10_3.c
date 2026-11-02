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
//           Accept distance in kilometres from user 
//           and convert it into meters (1 KM = 1000 Meters).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept distance as iNo
        If iNo is negative, return 0
        Calculate Meters = iNo * 1000
        Return Meters
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

int KMtoMeter(int iNo)
{
    if (iNo < 0) return 0;
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in meters is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////
