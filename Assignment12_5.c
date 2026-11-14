//Difference Between Factors and Non-Factors Sum

#include <stdio.h>

// Time Complexity: O(N) [Single Pass Optimization]
// Auxiliary Space Complexity: O(1)
int FactDiff(int iNo)
{
    int iSumFact = 0, iSumNonFact = 0;
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumFact += i;
        }
        else
        {
            iSumNonFact += i;
        }
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}