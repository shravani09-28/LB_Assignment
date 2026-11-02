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
//           Accept an amount in US Dollars ($) from 
//           the user and convert it into Indian Rupees (INR) 
//           assuming 1 USD = 70 INR.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept USD amount as iNo
        If iNo is negative, return 0
        Multiply iNo by 70 and store in result
        Return the result
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

int DollarToINR(int iNo)
{
    if (iNo < 0) return 0;
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////
