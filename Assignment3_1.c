//Print specified count of even numbers

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;
    int iValue = 2;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iValue);
        iValue += 2;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}