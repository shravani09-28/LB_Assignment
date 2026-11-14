//Count Even Digits

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0) iNo = -iNo;
    if (iNo == 0) return 1;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if ((iDigit & 1) == 0)
        {
            iCnt++;
        }
        iNo /= 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);
    printf("%d\n", iRet);

    return 0;
}
