#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* right;
    struct node* left;
};

struct node* createNode(int data){
    struct node *n;
    n= (struct node*) malloc(sizeof(struct node));
    n->data=data;
    n->right=NULL;
    n->left=NULL;
    return n;
}

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);

    }
}

void postorder(struct node* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

int main(){
    struct node* p=createNode(2);
    struct node* p1=createNode(4);
    struct node* p2=createNode(3);

    p->left=p1;
    p->right=p2;


    preorder(p);
    printf("\n");
    postorder(p);
    printf("\n");
    inorder(p);

    return 0;
}