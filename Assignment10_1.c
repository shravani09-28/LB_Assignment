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
//           Accept the radius of a circle from the user 
//           and calculate its area (PI * Radius * Radius).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept radius as fRadius
        If fRadius is negative, return 0.0
        Calculate Area = 3.14 * fRadius * fRadius
        Return Area
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

double CircleArea(float fRadius)
{
    if (fRadius < 0.0f) return 0.0;
    return 3.14 * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);
    printf("Area of Circle is %lf\n", dRet);

    return 0;
}

///////////////////////////////////////////////////
