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
//           Accept width and height of a rectangle from the 
//           user and calculate its area (Width * Height).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept width as fWidth and height as fHeight
        If fWidth < 0 or fHeight < 0, return 0.0
        Calculate Area = fWidth * fHeight
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

double RectArea(float fWidth, float fHeight)
{
    if (fWidth < 0.0f || fHeight < 0.0f) return 0.0;
    return (double)fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("Area of Rectangle is %lf\n", dRet);

    return 0;
}

///////////////////////////////////////////////////
