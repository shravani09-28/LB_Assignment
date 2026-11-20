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
//           Accept a string from the user and display 
//           only the numeric digit characters ('0'-'9').
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        If str is NULL, return
        Loop while *str != '\0':
            If *str >= '0' AND *str <= '9':
                Print *str
            Increment str pointer
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

void DisplayDigit(char *str)
{
    if (str == NULL) return;

    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    DisplayDigit(arr);

    return 0;
}

