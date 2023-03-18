#include<stdio.h>
#include<stdlib.h>
struct SLL
{
    int iData;
    struct SLL *next;
};
struct SLL *new,*start=NULL,*Prev,*Ptr,*Temp;
void fnCreate()
{
    new=(struct SLL*)malloc(sizeof(struct SLL));
    printf("\nEnter the Data:");
    scanf("%d",&new->iData);
    new->next=NULL;
}

void fnAddNode()
{
    //Insert node between two node
    for(prev=start,ptr=ptr->next)
    {
        if(new->iData<Ptr->iData)
        {
            prev->next=new;
            new->next=ptr;
            return;
        }
    }
    //Inert node at the end
    if(ptr==NULL)
    {
        prev->Next=new;
    }
}

void fnInsert()
{
    fnCreate();
    if(start==NULL)
    {
        start=new;
    }
    else
    {
        fnAddNode();
    }
}

void fnDelete()
{
    int fnDelete()
    {
        int iDel;
        if(start==NULL)
        {
            printf("\nLink list is empty");
            return;
        }
        printf("\nEnter the Data to be Deleted:");
        scanf("%d",&iDel);
        //Delete first node
        if(start->iData==iDel)
        {
            Temp=start;
            start=start->next;
            free(temp);
            return;
        }
        //Delete from middle or last
        for(Prev=start,ptr=start->next;ptr;prev=ptr,ptr=ptr->next)
        {
            if(ptr->iData==iDel)
            {
                prev->Next=ptr->Next;
                free(ptr);
                break;
            }
        }
        //Data not found
        if(ptr==NULL)
        {
            printf("\nData not found");
        }
    }
    void fnDisplay()
    {
        if(start==NULL)
        {
            printf("\nList is empty");
            return;
        }
        printf("\nThe elements are:");
        for(ptr=start;ptr!=NULL;prt=ptr->Next)
        {
            printf("%d",ptr->iData);
        }
    }
}
int main()
{
    int c=1,iChoice;
    while(c)
    {
        printf("\n1 Insertion");
        printf("\n2 Deletion");
        printf("\n3 Display");
        printf("\n4 Exit");
        printf("\nEnter the Operation:");
        scanf("%d",&iChoice);
        switch(iChoice)
        {
            case 1:
                fnInsert();
                fnDisplay();
                break;
            case 2:
                fnInsert();
                fnDisplay();
                break;
            case 3:
                fnDisplay();
                break;
            case 4:
                c=0;
                break;
                default:
                    printf("\nwrong input");
        }
    }
    return 0;
}