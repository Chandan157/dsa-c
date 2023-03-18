#include<stdio.h>
int fnSearch(int arr[],int iSize,int element){
    int i;
    for(i=0;i<iSize;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int i,iSize,element,iResult;
    int arr[]={1,3,6,3,8,9};
    iSize=sizeof(arr)/sizeof(int);
    element=8;
    iResult=fnSearch(arr,iSize,element);
    (iResult==-1)? printf("Element is not found in this array"): printf("Element is found in index %d",iResult);
    return 0;
}
