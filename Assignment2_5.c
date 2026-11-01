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
//           Accept a number from user and check whether 
//           it is an even number or an odd number.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        Divide iNo by 2 and check remainder
        If remainder is equal to 0:
            Return TRUE (Even)
        Else:
            Return FALSE (Odd)
        Display message according to return value
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

#include<stdio.h>

#define TRUE 1 
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkEven(iValue);
    
    if(bRet == TRUE)
    {
        printf("It is an Even number\n");
    }
    else
    {
        printf("It is an Odd number\n");
    }
    
    return 0;
}

