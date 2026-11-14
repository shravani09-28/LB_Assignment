//Summation of Non-Factors

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i != 0)
        {
            iSum += i;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("%d\n", iRet);

    return 0;
}
