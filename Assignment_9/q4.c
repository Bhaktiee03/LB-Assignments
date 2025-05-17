/*Write a program which accept number from user and count the frequency of 4 in it.
Input: 2395
Output: 0
*/
#include <stdio.h>

int FourFreq(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0, iFreq = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
        {
            iFreq++;
        }

        iNo = iNo / 10;
    }
    return iFreq ;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter the Number :");
    scanf("%d", &iValue);

    bRet = FourFreq(iValue);
    printf("%d",bRet);

    return 0;
}