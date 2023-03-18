#include <stdio.h>
int arr[100], iSize;
int fnSearch(int iSearch)
{
    int low, mid, high;
    low = 0;
    high = iSize - 1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == iSearch)
        {
            printf("Data found");
            return mid;
        }
        else if (arr[mid] < iSearch)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    printf("Number not found");
}
int main()
{
    int iNum, iIndex;
    printf("\nEnter the array size: ");
    scanf("%d", &iSize);
    printf("\nEnter element :");
    for (iIndex = 0; iIndex < iSize; iIndex++)
    {
        scanf("%d", &arr[iIndex]);
    }
    printf("\nEnter number to be search:");
    scanf("%d", &iNum);
    fnSearch(iNum);
    return 0;
}