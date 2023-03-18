#include<stdio.h>
int a[50],iSize;

void bubblesort(){
    int i,j,temp;
    for(i=0;i<=iSize-1;i++){
        for(j=0;j<iSize-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main(){
    int iIndex;
    printf("\nEnter the size of array:");
    scanf("%d",&iSize);
    printf("\nElements are:");
    for(iIndex=0;iIndex<iSize;iIndex++){
        scanf("%d",&a[iIndex]);
    }

    bubblesort();
    printf("\nAfter sorting: ");
    for(iIndex=0;iIndex<iSize;iIndex++){
        printf("%d ",a[iIndex]);
    }
    return 0;
}