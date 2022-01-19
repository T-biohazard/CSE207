//https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *left;
struct node *right;
};

void inOrder();
void PreOrder();


struct node *createNode(int n){
struct node *newNode;
newNode=(struct node*)malloc(sizeof(struct node));

newNode->data=n;
newNode->left=NULL;
newNode->right=NULL;

return newNode;
}




void inOrder(struct node *root){
if(root==NULL)
    return;

inOrder(root->left);
printf("%d",root->data);
inOrder(root->right);
}


void PreOrder(struct node *root){
if(root==NULL)
    return;

printf("%d",root->data);
PreOrder(root->left);
PreOrder(root->right);
}


main(){
//tried with fixed values 1,2,3

struct node *root=createNode(1);
root->right=createNode(2);
root->right=createNode(5);
root->left=createNode(3);
root->right=createNode(4);
root->right=createNode(6);

printf("\n inorder:");
inOrder(root);
printf("\n preorder:");
PreOrder(root);
return 0;

}

