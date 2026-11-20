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
//           Accept a string from the user and count the 
//           total number of lowercase letters ('a'-'z').
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        Initialize iCnt = 0
        If str is NULL, return 0
        Loop while *str != '\0':
            If *str >= 'a' AND *str <= 'z':
                Increment iCnt
            Increment str pointer
        Return iCnt
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

int CountSmall(char *str)
{
    int iCnt = 0;

    if (str == NULL) return 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    iRet = CountSmall(arr);
    printf("%d\n", iRet);

    return 0;
}
