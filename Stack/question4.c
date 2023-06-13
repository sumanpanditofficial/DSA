//Implementation of stack using Linked List
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *Top;
void push(int data){
    struct node* newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    if (newNode==NULL){
        printf("Stack OverFlow\n");
        exit(1);
    }
    newNode->data=data;
    newNode->link=NULL;
    newNode->link=Top;
    Top=newNode;
}
void print(void){
    struct node *temp;
    temp=Top;
    while(temp){
        printf(" %d -> ", temp->data);
        temp=temp->link;
    }
}
int main()
{
    int N,n;
    printf("Enter the number of stacks you want \n");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        printf("Enter the element you want to enter in stack: ");
        scanf("%d", &n);
        push(n);
    }
    print();

return 0;
}