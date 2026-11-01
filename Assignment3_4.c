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
//           Accept a character from user and toggle its case 
//           (convert lowercase to uppercase, and vice versa).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept character as cValue
        If cValue is lowercase ('a' to 'z'):
            Subtract 32 to convert to uppercase
            Print converted character
        Else If cValue is uppercase ('A' to 'Z'):
            Add 32 to convert to lowercase
            Print converted character
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

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\n", cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\n", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character: ");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}
