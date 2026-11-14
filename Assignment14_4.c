//Multiply Three Numbers Handling Zeros

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    // Ignore 0 values during product computation unless all inputs are zero
    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0) return 0;

    int iAns = 1;
    if (iNo1 != 0) iAns *= iNo1;
    if (iNo2 != 0) iAns *= iNo2;
    if (iNo3 != 0) iAns *= iNo3;

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("%d\n", iRet);

    return 0;
}

