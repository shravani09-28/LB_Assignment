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
//           Accept a number N from user and display 
//           N consecutive uppercase alphabets starting from 'A'.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept integer count as iNo
        If iNo is negative, convert it to positive
        Cap iNo at 26 (total English alphabets)
        Initialize ch = 'A'
        Iterate loop i from 1 to iNo:
            Print ch and increment ch
        Print newline
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

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    if (iNo < 0) iNo = -iNo;
    if (iNo > 26) iNo = 26;

    for (i = 1; i <= iNo; i++, ch++)
    {
        printf("%c\t", ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

