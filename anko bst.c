
//Creation and display of a BST
#include<stdio.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int data)
{
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    return t;
};

struct node*create(struct node* head, int data)
{
    if (head==NULL)
    {
        head = newnode(data);
        return head;
    }
    else if(data<=head->data)
        head->left=create(head->left, data);
    else
        head->right=create(head->right, data);
        return head;

};

void display(struct node* head)
{
    if(head!=NULL)
    {
        display(head->left);
        printf("%c ",head->data);
        display(head->right);

    }
}

int main()
{
    struct node* head=NULL;




        head=create(head,'E');
        head=create(head,'F');
        head=create(head,'C');
        head=create(head,'H');
        head=create(head,'G');
        head=create(head,'D');
        head=create(head,'B');
        head=create(head,'A');


    display(head);
    return 0;
}
