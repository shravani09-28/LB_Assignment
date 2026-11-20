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
//           Accept a string from the user and convert 
//           all lowercase letters into uppercase in-place.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        If str is NULL, return
        Loop while *str != '\0':
            If *str >= 'a' AND *str <= 'z':
                Subtract 32 from *str (convert to uppercase)
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

void struprx(char *str)
{
    if (str == NULL) return;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32;
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string is: %s\n", arr);

    return 0;
}
