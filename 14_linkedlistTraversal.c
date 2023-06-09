#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node* ptr){
    while(ptr!=NULL)
    {
        printf("Ekement: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //Allocate memory for node in linked list in Heap
    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;

    //link second and third nodes
    second->data=99;
    second->next=third;

    //Terminate the list at third node
    third->data=55;
    third->next=NULL;

    linkedlistTraversal(head);
    return 0;
}