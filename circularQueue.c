#include<stdio.h>
#define MAX 4
struct Cqueue
{
	int iRear;
	int aiData[MAX];
	int iFront;
};
void fnInsert(struct Cqueue *Cq1,int iNewData)
{
	int iTemp;
	iTemp=(Cq1->iRear+1)%MAX;
	if(iTemp==Cq1->iFront)
	{
		printf("\n queue overflow");
		return;
	}
	Cq1->iRear=iTemp;
	Cq1->aiData[ Cq1->iRear] = iNewData;
	
}
void fnDelete(struct Cqueue *Cq1)
{
	int iDel;
	if(Cq1->iFront==Cq1->iRear)
	{
		printf("\n queue underflow");
		return;
	}
	Cq1->iFront=(Cq1->iFront+1)%MAX;
	iDel=Cq1->aiData[Cq1->iFront];
    printf(" The deleted data is %d",iDel);
}
void fnDisplay(struct Cqueue *Cq1)
{
	int iIndex;
	if(Cq1->iFront==Cq1->iRear)
	{
		printf("\n queue underflow"); 
		return;
	}
	else 
        printf("\nqueue elements are : ");
	    for(iIndex=Cq1->iFront+1;iIndex<=Cq1->iRear;iIndex++)
	    {
		    printf("%d ",Cq1->aiData[iIndex]);
	    }
}
int main()
{
	int iNewData,iOperation,c=1;
	struct Cqueue Cq1;
	Cq1.iRear=-1;
	Cq1.iFront=-1;
	while(c)
	{
		
		printf("\n press 1 for insertion \n press 2 for delete\n press 3 for display\n press 4 for exit: ");
		printf("\n Enter the Operation:");
		scanf("%d",&iOperation);
		switch(iOperation)
		{
			case 1:
				printf("\nEnter the data to insert:");
				scanf("%d",&iNewData);
				fnInsert(&Cq1,iNewData);
				fnDisplay(&Cq1);
				break;
			case 2:
				fnDelete(&Cq1);
				fnDisplay(&Cq1);
				break;
			case 3:
				fnDisplay(&Cq1);
				break;
			case 4:
				c=0;
				break;
			default:
				printf("\nwrong choice");
			}
		}
	return 0;
}