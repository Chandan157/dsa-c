#include<stdio.h>
#define maxsize 3

struct queue
{
    int aiData[maxsize];
    int iFront;
    int iRear;
};

void fnInsert(struct queue *q,int aiData)
{
    if(q->iRear==maxsize-1)
    {
        printf("\nStack overflow");
        return;
    }
    else
    {
        q->aiData[++q->iRear]=aiData;
    }
}

void fnDelete(struct queue *q)
{
    int iDelData;
    if(q->iFront==q->iRear)
    {
        printf("\nQueue is underflow");
        return;
    }
    else
    {
        iDelData=q->aiData[++q->iFront];
        printf("\nDeleted data:%d",iDelData);
    }
}

void fnDisplay(struct queue *q)
{
    int iIndex;
    if(q->iFront==q->iRear)
    {
        printf("\nQueue is underflow");
        return;
    }
    else
    {
        printf("\nQueue elements are:");
        for(iIndex=q->iFront+1;iIndex<=q->iRear;iIndex++)
            {
                printf("%d",q->aiData[iIndex]);
            }
    }
}

int main()
{
    struct queue q;
    q.iFront=-1;
    q.iRear=-1;
    int iData,c=1,iChoice;
    while(c)
    {
        printf("\n1 Insertion\n2 Deletion\n3 Display\n4 Exit");
        printf("\nEnter the operation:");
        scanf("%d",&iChoice);
        switch(iChoice)
        {
            case 1:
                printf("\nEnter the data:");
                scanf("%d",&iData);
                fnInsert(&q,iData);
                fnDisplay(&q);
                break;
            case 2:
                fnDelete(&q);
                fnDisplay(&q);
                break;
            case 3:
                fnDisplay(&q);
                break;
            case 4:
                c=0;
                break;
            default:
                printf("\nInvalid input");
        }
    }
    return 0;
}