#include<stdio.h>

void insertionSort(int *arr, int n)
{
    for(int i=0; i<=n-1; i++) {
        int j=i;

        while(j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

void display(int *arr, int size)
{
    for(int i =0; i<size; i++) {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;
    int arr[50];

    printf("Enter size of Array: ");
    scanf("%d", &size);

    printf("Enter array elements: ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, size);
    display(arr, size);

    return 0;
}