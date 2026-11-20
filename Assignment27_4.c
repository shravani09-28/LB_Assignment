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
//           Accept a string from the user and check whether 
//           it contains any vowel (a, e, i, o, u case-insensitive).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        If str is NULL, return FALSE
        Loop while *str != '\0':
            Normalize character to lowercase via (*str | 32)
            If normalized char is 'a', 'e', 'i', 'o', or 'u':
                Return TRUE immediately (short-circuit exit)
            Increment str pointer
        Return FALSE
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

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
    char ch = '\0';

    if (str == NULL) return FALSE;

    while (*str != '\0')
    {
        ch = *str | 32; // Bitwise OR with 32 maps uppercase vowels directly to lowercase
        if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[50] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}

