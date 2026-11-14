//Difference Between Sum of Even and Odd Digits

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    if (iNo < 0) iNo = -iNo;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit & 1) == 0)
        {
            iSumEven += iDigit;
        }
        else
        {
            iSumOdd += iDigit;
        }
        iNo /= 10;
    }
    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d\n", iRet);

    return 0;
}

