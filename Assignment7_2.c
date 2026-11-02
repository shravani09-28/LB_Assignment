//Print Numbers Till N

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 1) return;
    for (int i = 1; i <= iNo; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}