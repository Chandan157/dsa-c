#include<stdio.h>
#include<stdlib.h>
#define maxsize 4

struct stack
{
    int aiData[maxsize];
    int iTop;
};

void fnPush(struct stack *s,int aiData)
{
    if(s->iTop==maxsize-1)
    {
        printf("\nStack is Overflow");
        return;
    }
    s->aiData[++s->iTop]=aiData;
}

int fnPop(struct stack *s){
    int iPop;
    if(s->iTop==-1){
        printf("\nStack is Underflow");
        return 0;
    }
    iPop=s->aiData[s->iTop--];
    return iPop;
}

void fnDisplay(struct stack *s)
{
    int iIndex;
    if(s->iTop==-1)
    {
        printf("Stack underflow");
        return;
    }
    printf("\nStack elements");
    for(iIndex=s->iTop;iIndex>=0;iIndex--){
        printf("\n%d",s->aiData[iIndex]);
    }
}

int main(){
    struct stack s;
    int iVal,iChoice,iPopData;
    s.iTop=-1;
    while(1)
    {
        printf("\n1 Push\n2 Pop\n3 Display\n4 Exit\n");
        printf("Enter your Choice");
        scanf("%d",&iChoice);
        switch(iChoice)
        {
            case 1:
                printf("\n Enter the Data to Push:");
                scanf("%d",&iVal);
                fnPush(&s,iVal);
                break;
            case 2:
                if(s.iTop==-1){
                    iPopData=fnPop(&s);
                    printf("\nPop Element:%d",iPopData);
                }
                else
                {
                    fnPop(&s);
                }
                break;
            case 3:
                fnDisplay(&s);
                break;
            case 4:
                exit(1);
            default:
                printf("\nInvalid input");
        }
    }
    return 0;
}