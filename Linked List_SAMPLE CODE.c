#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;                        //Data of the node
    struct Node *next;           //Address of the next node
}*head;

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

int main()
{
    int n;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct Node *fnNode, *tmp;
    int num, i;
    head = (struct Node *)malloc(sizeof(struct Node));

    if(head == NULL) //check whether the fnnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head->data = num;
        head->next = NULL; // links the address field to NULL
        tmp = head;
// Creating n nodes and adding to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct Node *)malloc(sizeof(struct Node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->data = num;      // links the num field of fnNode with num
                fnNode->next = NULL; // links the address field of fnNode with NULL

                tmp->next = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = fnNode;
            }
        }
    }
}
void displayList()
{
    struct Node *tmp;
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        tmp = head;
        while(tmp != NULL)
        {
             for(int i=n; i>=2; i--){
            printf(" Data = %d\n", tmp->data);       // prints the data of current node
            tmp = tmp->next;     }                // advances the position of current node
        }
    }
}
