#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct Node *topEle=NULL;
int size=0;

struct Node
{
    char data;
    struct Node *next;
};

void push(char val){
    struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
    temp->data=val;
    temp->next=topEle;
    topEle=temp;
    size++;
}

int pop(){
    if(topEle==NULL){
        return -1;
    }
    else{
        struct Node *temp=topEle;
        char data=topEle->data;
        topEle=topEle->next;
        free(temp);
        size--;
        return data;
    }
}

void reverse(char input[]){

    for(int i=0;i<strlen(input);i++){
        push(input[i]);
    }
    printf("The reversed string is:");
    for(int j=0;j<strlen(input);j++){
        printf("%c",pop());
    }
}

int main(){
    char str[30];
    printf("Enter a string to reverse:");
    fgets(str,sizeof(str),stdin);
    reverse(str);

}