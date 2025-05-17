/*write the program accept the number from user and find difference between Odd and  factorial of given number 
Input: 5
Output: -7      (8 -15)
Time Complexity of this program is O(n)
*/

#include<stdio.h>
int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        { 
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iEvenFact - iOddFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("factorial Differnce is %d",iRet);

    return 0;


}
