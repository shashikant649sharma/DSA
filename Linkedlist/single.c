#include <stdio.h>
#include <stdlib.h>
// define the dataType
struct Node{
  int data;
  struct Node * next;
};



// traverse the linked list.
void singleListTravers(struct Node* ptr){
  while(ptr!= NULL){
  printf( "\n Element: %d", ptr -> data);
  ptr = ptr->next;
  
  
  }
  
};
  // insert at the start of list
   struct Node* insertStart(struct Node *head, int data){
         struct Node* ptr = (struct node*) malloc(sizeof (struct Node));
     ptr -> next = head;
     ptr -> data = data;
     
     return ptr;
     
  }
  // insert at the END of list
   struct Node* insertEnd(struct Node* head, int data){
     struct Node* ptr = (struct Node*) malloc(sizeof(struct Node*));
     struct Node* p = head;
     
     
     while (p -> next != NULL){
       p = p -> next;
       
     }
     
     ptr -> data = data;
     p -> next = ptr;
     ptr -> next =  NULL;
     
     
    return head;
    
  }
  // insert afer the node in list
   struct Node*  insertAfter(struct Node* head,struct Node* prevNode,int data){
     
     struct Node* ptr = (struct Node*) malloc (sizeof(struct Node*));
     
     ptr -> data = data;
     
     ptr -> next = prevNode ->next;
     prevNode -> next = ptr;
     
    return head;
    
  }
  
  
  // insert between to nodes in list
   struct Node* insertIndex(struct Node* head,int data, int index){
     
     struct Node* ptr = (struct Node*) malloc (sizeof(struct Node*));
     struct Node* p = head;
     
     int i = 0;
     
     while (i<index-1 ){
       
        p = p -> next;
        i++;
     }
     ptr -> data = data;
     ptr -> next = p -> next;
     p -> next = ptr;
     
     // printf("\ninsert at Between !");
    
    return head;
  }


int main()
{
    struct Node *head = (struct node*) malloc(sizeof (struct Node));
    struct Node *second = (struct node*) malloc(sizeof (struct Node));
    struct Node *third = (struct node*) malloc(sizeof (struct Node));
    struct Node *forth = (struct node*) malloc(sizeof (struct Node));
    
    
    head -> data = 1;
    head -> next = second;
    
    second -> data = 2;
    second -> next = third;
    
    third -> data = 3;
    third -> next = forth;
    
    forth -> data = 4;
    forth -> next = NULL;
    
    singleListTravers(head);
    
    head = insertStart(head, 0);
    printf(" \n after start");
    singleListTravers(head);
    
    insertIndex(head,0 , 4 );
    printf(" \n after between");
    singleListTravers(head);
    
    head = insertAfter(head,second,7);
    printf(" \nafter Node");
    singleListTravers(head);
     
    insertEnd(head, 0);
    printf(" \n after End");
    singleListTravers(head);
    
      // printf(" \n after1");
    
    // singleListTravers(head);
    
    
    return 0;
}