#include<stdio.h>
#include<stdlib.h>

struct linked_list
{
    int data;
    struct linked_list *next;
};

struct linked_list * head;

void insertbegning();
void delete_end();
void delete_front();
void delete_mid();
void display();


int main(){

    int choice=0;
    while (choice!=6)
    {
        printf("\nChoose from the menu given below\n");
        printf("1.Insert at the Begning \n2.Delete at the End\n3.Delete at the Mid\n4.Delete in the Front\n5.Display\n6.Exit");
        printf("Enter your Choice-->");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insertbegning();
            break;
         case 2:
            delete_end();
            break;
         case 3:
            delete_mid();
            break;
         case 4:
            delete_front();
            break;

        case 5:
            display();
            break;

         case 6:
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


void delete_front()  
{  
    struct linked_list *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
} 


void delete_end()  
{  
    struct linked_list *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
          
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
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


void delete_mid()  
{  
    struct linked_list *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  