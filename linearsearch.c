#include <stdio.h>
int arr[100], iSize;
void search(int element)
{
    int iIndex;
    for (iIndex = 0; iIndex < iSize; iIndex++)
    {
        if (arr[iIndex] == element)
        {
            printf("Number found at position  %d", iIndex);
            return;
        }
    }

    printf("Number not found");
    // if (iIndex = iSize)
    // {
    //     printf("Number not found");
    
    // }
}
int main()
{
    int iNum, iIndex;
    printf("Enter the size of array: ");
    scanf("%d", &iSize);
    printf("Enter the array element: ");
    for (iIndex = 0; iIndex < iSize; iIndex++)
    {
        scanf("%d", &arr[iIndex]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &iNum);
    search(iNum);
    return 0;
}