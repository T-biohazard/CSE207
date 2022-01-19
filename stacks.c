
    #include<stdio.h>
    struct stack{
    int data;
    struct stack *next;

    } *top=NULL;

    void push(int element);
    void pop();
    void display();
    void exit();
   int size();

    int main(){   //top 1 2 3    //ex-1
    int n,m,t;
    printf("limit:");
    scanf("%d",&n);

    printf("data:");
    scanf("%d",&m);
    push(m);
    for(int i=1;i<n;i++){
    scanf("%d",&t);
    if( top->data ==t) //****
    {
    pop();}
    else{
    push(t);
    }}

    if(size()==NULL){
    printf("\nNULL\n");
    }
    else{
    display();
    }
    }


    int size(){
    int c=0;
    struct stack *tmp=top;
    while(tmp!=NULL){
    c++;
    tmp=tmp->next;
    }
    return c;
    }

    void push(int element){      //ex-2

    struct stack *newNode;
    newNode= malloc(sizeof(newNode));

    if(newNode==NULL){
    printf("stack overflow");
    exit();
    }
    else{
    newNode->data=element;
    newNode->next=NULL;
    newNode->next=top;
    top=newNode;
    }
    }
    void pop(){            //ex-3
    struct stack *temp;
    int k;
    temp=top;
    k=temp->data;
    top=top->next;
    free(temp);
    }
    void display(){
    struct stack *tmp;
    tmp=top;
    printf("\nThe elements are:\n");
    while (tmp){ //temp!=0
    printf("here we got: \n%d\n",tmp->data);
    tmp=tmp->next;
    }
    }

