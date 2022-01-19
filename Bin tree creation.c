//5.3 jnnys-5.6

#include<stdio.h>

struct node{
int data;
struct node *left,*right;

};


struct node *create(){
    int x;
struct node *newNode=malloc(sizeof(struct node));

printf("Input data(nb: input -1 to stop):");
scanf("%d",&x);
if(x==-1){
    return 0;
}
newNode->data=x;

printf("Enter left data of %d \n",x);
newNode->left=create();


printf("Enter right data of %d \n",x);
newNode->right=create();

return newNode;
};

void main(){
struct main *root=NULL;
root=create();

printf("\n in-order:");
inOrder(root);

printf("\n Pre-order:");
PreOrder(root);
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
