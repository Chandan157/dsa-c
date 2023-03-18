#include <stdio.h>
int Original[20][20];
int SparseMat[20][3];
int iRow, iCol, i, j;
int fnNonZero()
{
    int iNonZero = 0;
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (Original[i][j] != 0)
            {
                iNonZero++;
            }
        }
    }
    return iNonZero;
}
void fnSparse_Mat()
{
    int iIndex = 0;
    int n = fnNonZero();
    SparseMat[iIndex][0] = iRow;
    SparseMat[iIndex][1] = iCol;
    SparseMat[iIndex][2] = n;
    iIndex += 1;
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (Original[i][j] != 0)
            {
                SparseMat[iIndex][0] = i;
                SparseMat[iIndex][1] = j;
                SparseMat[iIndex][2] = Original[i][j];
                iIndex += 1;
            }
        }
    }
    printf("\nThe new matrix is:\n");
    for (i = 0; i < n + 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", SparseMat[i][j]);
        }
        printf("\n");
    }
}

void Input()
{
    printf("\nEnter the no of rows of the array: ");
    scanf("%d", &iRow);
    printf("\nEnter the no of columns of the array: ");
    scanf("%d", &iCol);
    printf("\nEnter the array elements:\n");
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            scanf("%d", &Original[i][j]);
        }
    }
    printf("\nThe array elements:\n");
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%d ", Original[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    Input();
    int n = fnNonZero();
    printf("\nThe no of non zero elements are: %d", n);
    fnSparse_Mat();
    return 0;
}