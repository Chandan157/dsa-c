#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int a[5], iSize;

void selectionsort()
{
        int temp, indexofmin, i, j;
        for (i = 0; i <= iSize - 1; i++)
        {
                indexofmin = a[i];
                for (j = i + 1; j <= iSize - 1; j++)
                {
                        if (a[j] < a[i])
                        {
                                temp = a[j];
                                a[j] = a[i];
                                a[i] = temp;
                        }
                }
        }
}
int main()
{
        int iIndex;
        printf("\n Enter the size of the array :");
        scanf("%d", &iSize);
        printf("\n Enter the array elements:\n");
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
        selectionsort();
        printf("\nAfter sorting: ");
        printf("\n the array is:");
        for (iIndex = 0; iIndex < iSize; iIndex++)
        {
                printf("%d ", a[iIndex]);
        }
        getch();
        // clrscr();
        return 0;
}