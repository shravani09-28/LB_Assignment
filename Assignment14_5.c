//Calculate Percentage

#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    if (iTotal <= 0 || iObtained < 0 || iObtained > iTotal)
    {
        return 0.0f; // Input Guard Clause
    }
    return ((float)iObtained / (float)iTotal) * 100.0f;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is %.1f%%\n", fRet);

    return 0;
}

