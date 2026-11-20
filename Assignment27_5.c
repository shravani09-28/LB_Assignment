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
//           Accept a string from the user and display its 
//           characters in reverse order without allocating extra memory.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept string pointer str
        If str is NULL or *str == '\0', return
        Initialize end = str
        Advance end pointer to the null terminator '\0'
        Step end back by 1 character
        Loop while end >= str:
            Print *end
            Decrement end
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

void Reverse(char *str)
{
    char *end = str;

    if ((str == NULL) || (*str == '\0')) return;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (end >= str)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    return 0;
}
