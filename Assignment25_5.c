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
//           Accept student division (A, B, C, or D, case-insensitive) 
//           and display the corresponding exam timing:
//           A -> 7 AM, B -> 8.30 AM, C -> 9.20 AM, D -> 10.30 AM.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept division character chDiv
        Normalize chDiv to uppercase if lowercase ('a'-'z')
        Switch on chDiv:
            Case 'A': Print "Your exam at 7 AM"
            Case 'B': Print "Your exam at 8.30 AM"
            Case 'C': Print "Your exam at 9.20 AM"
            Case 'D': Print "Your exam at 10.30 AM"
            Default:  Print "Invalid Division"
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

void DisplaySchedule(char chDiv)
{
    if ((chDiv >= 'a') && (chDiv <= 'z'))
    {
        chDiv -= 32; // Normalize case in O(1)
    }

    switch (chDiv)
    {
        case 'A':
            printf("Your exam at 7 AM\n");
            break;
        case 'B':
            printf("Your exam at 8.30 AM\n");
            break;
        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;
        case 'D':
            printf("Your exam at 10.30 AM\n");
            break;
        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
