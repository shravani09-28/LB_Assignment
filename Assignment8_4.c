//Display Multiplication Table

#include <stdio.h>

void Table(int iNo)
{
    if (iNo < 0) iNo = -iNo;

    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", iNo * i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}

