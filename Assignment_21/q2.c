// accept N numbers from user and return the Smallest number

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin=Arr[0];
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iCnt = 0, iSize = 0, iNo = 0, iRet = 0;

    printf("Enter the number of elements you want to store in an array:\n");
    scanf("%d", &iSize);

    int *ptr = NULL;

    ptr = (int *)malloc(iSize * sizeof(int));

    if (NULL == ptr)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter the %d element:\n", (iCnt + 1));
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Minimum(ptr, iSize);
    printf("Minimum in the array is %d",iRet);
    free(ptr);

    return 0;
}
