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
//           Display numbers from 5 down to 1 using a while loop.
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Initialize variable i to 5
        Iterate loop while i is greater than or equal to 1
        Print current value of i
        Decrement counter i by 1
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

void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf(" %d", i);
        i--;
    }
}

int main ()
{
    Display();
    return 0;
}
