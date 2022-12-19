#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void peek();

int stack[50],size,top=-1,i,option;

int main(){

    printf("Enter the size of the stack-->");
    scanf("%d",&size);

    while (option !=4)
    {
    printf("Enter the options\n1.push()\n2.pop()\n3.peek()\n4.exit()\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        push();
        break;
         case 2:
        pop();
        break;
        
         case 3:
        peek();
        break; 
        
        case 4:
        printf("Exiting\n");
        break;
    
    default:
    printf("Chooose the correct option\n");
        break;
    }

    }

    return 0;
}

void push(){

    int value;
    if (top == size)
    {
        printf("STack is full\n");
    }else{
        printf("Enter the value in stack-->\n");
        scanf("%d",&value);
        top++;
        stack[top]=value;

    }

}

void pop(){
    if (top == -1)              
    {
       printf("Stack is empty");
    }else{
        top--;
    
    }
    
}

void peek(){

    for ( i = top; i >=0; i--)
    {
        printf("%d\n",stack[i]);
    }
    if (top==-1)
    {
        printf("Stack is empty");
    }
    
    

}