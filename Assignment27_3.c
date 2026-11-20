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
//           Accept a string from the user and return the difference 
//           between the frequency of small characters and capital characters.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        Initialize iDiff = 0
        If str is NULL, return 0
        Loop while *str != '\0':
            If *str >= 'a' AND *str <= 'z':
                Increment iDiff
            Else If *str >= 'A' AND *str <= 'Z':
                Decrement iDiff
            Increment str pointer
        Return iDiff
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

int Difference(char *str)
{
    int iDiff = 0;

    if (str == NULL) return 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iDiff++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iDiff--;
        }
        str++;
    }
    return iDiff;
}

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);
    printf("%d\n", iRet);

    return 0;
}

