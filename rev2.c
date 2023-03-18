// #include <stdio.h>
// #include <stdlib.h>

// int a[5], iSize;
// void selectionSort()
// {
//         int i, j, temp, indexofmin;
//         for (i = 0; i < iSize; i++)
//         {
//                 indexofmin = a[i];
//                 for (j = i+1; j < iSize; j++)
//                 {
//                         if (a[j] < a[i])
//                         {
//                                 temp = a[j];
//                                 a[j] = a[i];
//                                 a[i] = temp;
//                         }
//                 }
//         }
// }

// int main()
// {
//         int iIndex;
//         printf("\nEnter the size of array:");
//         scanf("%d", &iSize);
//         printf("\nEnter the elements:");
//         for (iIndex = 0; iIndex < iSize; iIndex++)
//         {
//                 scanf("%d", &a[iIndex]);
//         }

//         printf("\nBefore sorting:");
//         for (iIndex = 0; iIndex < iSize; iIndex++)
//         {
//                 printf("\n%d", a[iIndex]);
//         }
//         selectionSort();

//         printf("\nAfter sorting the array is:");
//         for (iIndex = 0; iIndex < iSize; iIndex++)
//         {
//                 printf("\n%d", a[iIndex]);
//         }
//         return 0;
// }

