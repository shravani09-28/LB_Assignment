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
//           Accept rows and columns and display row numbers 
//           in descending order from iRow down to 1.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept iRow and iCol
        Iterate outer loop i from iRow down to 1:
            Iterate inner loop j from 1 to iCol:
                Print i
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

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if (iRow < 0) iRow = -iRow;
    if (iCol < 0) iCol = -iCol;

    for (i = iRow; i >= 1; i--)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

