#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};

struct linked_list * head;

void insertbegning();
void insertend();
void insertmid();
void display();




int main(){

    int choice=0;
    while (choice!=5)
    {
        printf("\nChoose from the menu given below\n");
        printf("1.Insert at the Begning \n2.insert at the End\n3.Insert at the Mid\n4.Display in the Linked List\n5.Exit");
        printf("Enter your Choice-->");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insertbegning();
            break;
         case 2:
            insertend();
            break;
         case 3:
            insertmid();
            break;
         case 4:
            display();
            break;
         case 5:
            exit(0);
            break;
        
        default:
            printf("Enter the valid choice\n");
            break;
        }
    }
    
    return 0;
}


// void begin function defination

void insertbegning(){

    int item;
   
    struct  linked_list *ptr;

    ptr = (struct linked_list *) malloc(sizeof(struct linked_list *)); ;

    if (ptr == NULL)
    {
        printf("Overflow\n");
    }
    else{
        printf("Enter the number to be inserted\n");
        scanf("%d",&item);

        ptr->data =item;
        ptr->next =head;
        head = ptr;

        printf("node inserted\n");



    }
  
}

void insertend(){

    struct linked_list *ptr,*temp;  
    int item;     
    ptr = (struct linked_list*)malloc(sizeof(struct linked_list));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            ptr -> next = NULL;  
            head = ptr;  
            printf("\nNode inserted");  
        }  
        else  
        {  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nNode inserted");  
          
        }  
    }  
}
void insertmid(){
    int i,loc,item;   
    struct linked_list *ptr, *temp;  
    ptr = (struct linked_list *) malloc (sizeof(struct linked_list));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&item);  
        ptr->data = item;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
        printf("\nNode inserted");  
    }  

}
void display(){
    struct linked_list *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}