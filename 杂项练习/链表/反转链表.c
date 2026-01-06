#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char *data;
    struct node *next;
}node;
void reverse(node **head){
    node *prev=NULL, *current=*head;
    while (current!=NULL){
        current->next=prev;
        prev=current;
        current=current->next;
    }
}