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
//           Accept a number from the user and print 
//           "Small" if it is less than 50, 
//           "Medium" if it is between 50 and 100, 
//           and "Large" if it is greater than 100.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        If iNo is less than 50:
            Print "Small"
        Else If iNo is greater than 50 and less than 100:
            Print "Medium"
        Else If iNo is greater than 100:
            Print "Large"
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

// Time Complexity: O(1)
// Auxiliary Space Complexity: O(1)
void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if (iNo > 100)
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

///////////////////////////////////////////////////
