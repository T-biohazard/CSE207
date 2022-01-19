    #include<stdio.h>

    void linsearch();
    void binsearch();
    void selectionSort();
    void bubbleSort();
     void insertionSort();


    int main(){
    int n,i,pos,key;
    printf("choice:\n 1.linSearch\n 2.binSearch \n 3.selection sort\n 4.Bubble sort \n 5.Insertion sort\n");
    scanf("%d",&n);

    if(n==1){
        printf("Val: ");
            scanf("%d",&pos);
      linsearch(pos);
    }

    if(n==2){
           printf("Val: ");
            scanf("%d",&key);
     binsearch(key);
    }

    if(n==3){
    selectionSort();
    }
    if(n==4){
    bubbleSort();
    }

    if(n==5){
    insertionSort();
    }

    }


    void linsearch(int pos){
    int i,j,x,k=0;
    int arr[100];

     printf("Input limit:");
    scanf("%d",&x);
    for (i=0;i<x;i++){
            printf("Input vals:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++){
            if(arr[i]==pos){
            printf("%d is ditected at position %d",pos,k+1);
            break;
            }
            k++;

    }
    }



    void binsearch(key){
    int i,j,x,k=0;
    int arr[100];

     printf("Input limit:");
    scanf("%d",&x);
    for (i=0;i<x;i++){
            printf("Input vals:");
        scanf("%d",&arr[i]);
    }
    int f=0,l=x,m;

    while(f<=l){
    m=(f+l)/2;
    if(key==arr[m]){
        printf("%d is ditected ",key);
        break;
    }
    else if(key>arr[m]){
        f=m+1;
    }
    else if(key<arr[m]){
        l=m-1;
    }
    else{
        printf("Not found");
    }
    }
    }



    void selectionSort(){

    int i,j,x;
    int arr[100];

     printf("Input limit:");
    scanf("%d",&x);
    for (i=0;i<x;i++){
            printf("Input vals:");
        scanf("%d",&arr[i]);
    }


    for(i=0;i<x-1;i++){
    int min=i;
    for(j=i+1;j<x;j++){
    if(arr[j]<arr[min]){
        min=j;
    }
    }
    if(min!=i){
    int tmp=arr[min];
    arr[min]=arr[i];
    arr[i]=tmp;      //swap
    }

    }
    printf("sorted form: ");
    for(i=0;i<x;i++)
    printf("\t%d",arr[i]);
    }



    void bubbleSort(){
    int i,j,x;
    int arr[100];

     printf("Input limit:");
    scanf("%d",&x);
    for (i=0;i<x;i++){
            printf("Input vals:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x-1;i++){
        for(j=0;j<x-1-i;j++){ //compare
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
     printf("sorted form: ");
    for(i=0;i<x;i++)
    printf("\t%d",arr[i]);

    }




    void insertionSort(){
         int i,j,x;
    int arr[100];

     printf("Input limit:");
    scanf("%d",&x);
    for (i=0;i<x;i++){
        printf("Input vals %d:",i+1);
        scanf("%d",&arr[i]);
    }


    for(i=1;i<x;i++){
       int temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    printf("sorted form: ");
    for(i=0;i<x;i++)
    printf("\t%d",arr[i]);
    }


