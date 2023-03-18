#include <stdio.h>
int a[50], iSize;
void Swap();

void bubblesort()
{
        int temp, i, j;
        for (i = 0; i < iSize; i++)
        {
                for (j = 0; j < iSize - 1 - i; j++)
                {
                        if (a[j] > a[j + 1])
                        {
                                temp = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = temp;
                        }
                }
        }
}

int main()
{
        int iIndex;
        printf("\n Enter the size of the array :");
        scanf("%d", &iSize);
        printf("\n Enter the array elements\n:");
        for (iIndex = 0; iIndex < iSize; iIndex++)
        {
                scanf("%d", &a[iIndex]);
        }
        printf("Before sorting: ");
        printf("\n the array is:");
        for (iIndex = 0; iIndex < iSize; iIndex++)
        {
                printf("%d ", a[iIndex]);
        }
        bubblesort();
        printf("\nAfter sorting: ");
        printf("\n the array is:");
        for (iIndex = 0; iIndex < iSize; iIndex++)
        {
                printf("%d ", a[iIndex]);
        }
        return 0;
}