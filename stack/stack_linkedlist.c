#include<stdio.h>
#include<stdlib.h>

struct stack_linkedlist
{
    int data;
    struct stack_linkedlist *next;
};

struct stack_linkedlist *head =NULL;

void printList();


void push(int val){
    struct stack_linkedlist *newnode=malloc(sizeof(struct stack_linkedlist));
    newnode->data=val;
    newnode->next=head;
    head = newnode;
    
}

void pop(){
     struct stack_linkedlist *temp;
     if (head == NULL)
     {
        printf("Stack is empty");
     }else{
        printf("Delete the item-->%d",head->data);
        head=temp;
        head =head->next;
        free(temp);

        printList();
       
     }
}

void printList()
{
    struct stack_linkedlist *temp = head;

    //iterate the entire linked list and print the data
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
     


int main(){

    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);

    printList();


    pop();  



    return 0;
}