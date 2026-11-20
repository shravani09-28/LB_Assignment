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
//           Accept a string from the user and toggle the case 
//           of every alphabetical character in-place.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        If str is NULL, return
        Loop while *str != '\0':
            If *str >= 'A' AND *str <= 'Z':
                *str = *str ^ 32 (toggle ASCII case bit)
            Else If *str >= 'a' AND *str <= 'z':
                *str = *str ^ 32 (toggle ASCII case bit)
            Increment str pointer
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

void strtogglex(char *str)
{
    if (str == NULL) return;

    while (*str != '\0')
    {
        if (((*str >= 'A') && (*str <= 'Z')) || ((*str >= 'a') && (*str <= 'z')))
        {
            *str ^= 32; // Bitwise XOR with 32 flips case directly
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}

