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
//           Accept rows and columns and display '#' along 
//           the anti-diagonal (i + j == iCol + 1), '*' above it, 
//           and '@' below it.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept iRow and iCol
        Calculate targetSum = iCol + 1
        Iterate outer loop i from 1 to iRow:
            Iterate inner loop j from 1 to iCol:
                If (i + j) == targetSum:
                    Print "# "
                Else If (i + j) < targetSum:
                    Print "* "
                Else:
                    Print "@ "
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
    int i = 0, j = 0, iTarget = 0;

    if (iRow < 0) iRow = -iRow;
    if (iCol < 0) iCol = -iCol;

    iTarget = iCol + 1;

    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i + j) == iTarget)
            {
                printf("#\t");
            }
            else if ((i + j) < iTarget)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
            }
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