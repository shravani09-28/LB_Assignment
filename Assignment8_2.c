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
//           Accept a single-digit number from the user 
//           and display it in word format.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer as iNo
        If iNo is negative, convert it to positive
        Check value using switch case:
            Case 0: Print "Zero"
            Case 1: Print "One"
            Case 2: Print "Two"
            Case 3: Print "Three"
            Case 4: Print "Four"
            Case 5: Print "Five"
            Case 6: Print "Six"
            Case 7: Print "Seven"
            Case 8: Print "Eight"
            Case 9: Print "Nine"
            Default: Print "Invalid Number"
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

void Display(int iNo)
{
    if (iNo < 0) iNo = -iNo; // Handle negative single digits

    switch (iNo)
    {
        case 0: printf("Zero\n"); break;
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
        default: printf("Invalid Number\n"); break;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

///////////////////////////////////////////////////
