#ifndef LINKED_LIST
#define LINKED_LIST
  typedef struct node{
    int data;
    struct node* next;

  }Node;
   Node* ll_make_node(int data);
   Node* ll_prepend(Node* head, int data);
   Node* ll_insert_before(Node* head, Node* mark, int data);
   Node* ll_delete_node(Node* head, Node* node);
   Node*ll_find(Node* head, int data);
   void ll_print(Node* head);

   #endif
