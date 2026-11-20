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
//           Accept a string and a character from the user, 
//           and return the 0-based index of its last occurrence 
//           (return -1 if not found).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str and character ch
        Initialize i = 0, iLastPos = -1
        If str is NULL, return -1
        Loop while str[i] != '\0':
            If str[i] == ch:
                Update iLastPos = i
            Increment i
        Return iLastPos
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

int LastChar(char *str, char ch)
{
    int i = 0, iLastPos = -1;

    if (str == NULL) return -1;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            iLastPos = i;
        }
        i++;
    }
    return iLastPos;
}

int main()
{
    char arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);
    printf("Character location is %d\n", iRet);

    return 0;
}
