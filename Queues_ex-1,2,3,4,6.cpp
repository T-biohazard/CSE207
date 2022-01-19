#include<stdio.h>
#define Size 100
struct stack
{
    int data;
    struct stack *nxtptr;
}*front,*rear;


void Enqueue(int data);
void dequeue();
void display();
int copyQueue();
void findNegative();
int size=0;
int main()
{
    front=NULL;
    rear=NULL;
        int ch,data;
    do
    {

    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 :
        {
            printf("Enter the data you want to push in the stack: ");
            scanf("%d",&data);
            Enqueue(data);
            break;
        }
    case 2 :
        {
            printf("%d\n",dequeue());
            break;
        }
    case 3 :
        {
            display();
            break;
        }

    default:
        {
            printf("Enter valid number.\n");
            break;
        }
    }
    }
    while(ch!=6);
    return;
}




//Exercise 1:Create Queue (Enqueue)

void Enqueue(int data)
{
    struct stack *newNode;
    newNode=(struct stack*)malloc(sizeof(struct stack));
    newNode->data=data;
    newNode->nxtptr=NULL;
    if(front==NULL&& rear==NULL)
    {
        front=rear=newNode;
    }
    else
    {
        rear->nxtptr=newNode;
        rear=newNode;
    }
}

void display()
{
    int i;
    struct stack*tmp;
    if(front==NULL||rear==NULL)
    {
        printf("No data entered.\n");
    }
    else
    {
        tmp=front;
        while(tmp!=NULL)
        {
            printf("%d\n",tmp->data);
            tmp=tmp->nxtptr;
        }
    }
}



 //ex-2 Delete node from Queue (Dequeue)

int dequeue()
{
    if(front==NULL)
    {
        printf("No data entered.\n");
    }
    else
    {
        struct stack *tmp;
        tmp=front;
        front=front->nxtptr;
        return (tmp->data);
        free(tmp);
    }
}



//Exercise 4:CopyQueue

int copyQueue()
{
        struct stack *tmp;
        if(front==NULL)
    {
        printf("No data entered.\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
        tmp=front;
        front=front->nxtptr;
        printf("%d\n",tmp->data);
        free(tmp);
        }
    }
}




 //Exercise 6:Delete all Negative Integer


void findNegative()
{
    struct stack *tmp=NULL;
    tmp=front;
    while(tmp!=NULL)
    {
        if(tmp->data<0)
        {
            dequeue(tmp->data);
        }
        else
        {
            printf("%d ",tmp->data);
        }
         tmp=tmp->nxtptr;
    }
}
