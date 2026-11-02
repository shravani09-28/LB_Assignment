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
//           Accept temperature in Fahrenheit from the user 
//           and convert it to Celsius ((F - 32) * (5 / 9)).
//
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//  Step 2 : Write the algorithm
/*
    START
        Accept temperature as fTemp
        Calculate Celsius = (fTemp - 32.0) * (5.0 / 9.0)
        Return Celsius value
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

double Fhtocs(float fTemp)
{
    return (double)(fTemp - 32.0f) * (5.0 / 9.0);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = Fhtocs(fValue);
    printf("Temperature in Celsius is %lf\n", dRet);

    return 0;
}

///////////////////////////////////////////////////
