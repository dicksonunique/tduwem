#include <stdio.h>
#include <stdlib.h>
/**
 * struct node - definition of the linked list
 * @n: data
 * @next: next node
 * @prev: Previous node
 * */
 
typedef struct node{
        int n;
        struct node *next;
        struct node *prev;
        }node;
        
struct node* addToEmpty( node *head, int data)
{
    node *temp = malloc(sizeof(node));
    temp -> prev = NULL;
    temp -> n = data;
    temp -> next = NULL;
    head = temp;
    return head;
}
struct node* addAtBeg(node *head, int data)
{
    node *temp = malloc(sizeof(node));
    
    temp -> prev = NULL;
    temp -> n = data;
    temp -> next = NULL;
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    return head;
}
struct node* addAtEnd(node *head, int data)
{
    node *temp, *tp;
    temp = malloc(sizeof(node));
    temp -> prev = NULL;
    temp -> n = data;
    temp -> next = NULL;
    tp = head;
    while(tp->next != NULL)
    {
        tp = tp -> next;
    }
    tp->next = temp;
    temp->prev = tp;
    return head;
}


int main() {
  
        
  node * head = NULL;
  head = addToEmpty( head, 89);
  head = addAtBeg( head, 789);
  head = addAtEnd( head, 78);
  
  node *ptr = head;
  
  while (ptr != NULL){
      printf("%d\n", ptr -> n);
      ptr = ptr -> next;
      
  }
   
    

    return 0;
}
