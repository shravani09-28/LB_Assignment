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
//           Display the complete ASCII table (0 to 255) showing 
//           Decimal, Hexadecimal, Octal, and Character symbol values.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Print table header ("Dec | Hex | Oct | Char")
        Iterate loop i from 0 to 255:
            Print i in Decimal (%d), Hexadecimal (%X), Octal (%o), and Character (%c)
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

void DisplayASCII()
{
    int i = 0;

    printf("Dec\tHex\tOct\tChar\n");
    printf("--------------------------------\n");

    for (i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t%o\t%c\n", i, i, i, (i >= 32 && i <= 126) ? i : ' ');
    }
}

int main()
{
    DisplayASCII();
    return 0;
}
