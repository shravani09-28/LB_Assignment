//Multiplication of Factors

#include <stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i <= iNo / 2; i++) // Optimal loop bound
    {
        if (iNo % i == 0)
        {
            iMult *= i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("%d\n", iRet);

    return 0;
}

