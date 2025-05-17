/*Write a program which accept number from user and check whether it contains 0 in it or not.
Input: 2395
Output: There is no Zero
*/

#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0 , iCnt = 0;
    BOOL bFlag = false;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            bFlag = true;
        }

        iNo = iNo / 10;
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("it does not contain zero");
    }
    return 0;
}