//Write a program which accept N and print first 5 multiples of N.
//Input :4
//Output :12 16 20

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    
    printf("Multiples of %d are: ",iNo);
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d", &iValue);

    MultipleDisplay(iValue); 
    return 0;
}