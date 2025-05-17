/*write the program accept the number from user and find Even factorial of given number 
Input: 5
Output: 8  (4*2)
Time Complexity of this program is O(n)
*/

#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;

    if(iNo< 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return iEvenFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}