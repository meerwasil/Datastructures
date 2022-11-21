#include<stdio.h>
#include <stdlib.h>
#include "doubly_linked_list.h"
  DoubleNode *dll_create_node(data value){
    DoubleNode *node = calloc(1,sizeof(DoubleNode));
     node-> value = value;
     node-> prev = NULL;
     node-> next =  NULL;
      return node;
       }

   DoubleNode *dll_prepend(DoubleNode *head , data value){
    DoubleNode *newnode = dll_create_node(value);
     newnode-> next = head;
      if(head)
      head-> prev = newnode;
       return newnode;
        }

    void dll_insert_before(DoubleNode *node , data value){
        DoubleNode *newnode = dll_create_node(value);
        DoubleNode *origprev = node-> prev;
        newnode-> prev = origprev;
        newnode-> next = node;
         if(origprev)
          origprev-> next = newnode;
        
        }
             
    void dll_insert_after(DoubleNode *node, data value){
        DoubleNode *newnode = dll_create_node(value);
        DoubleNode *orignext = node-> next;
        node-> next = newnode;
        newnode-> prev = node;
        newnode-> next = orignext;
         if(orignext)
          orignext-> prev = newnode;
         }

     DoubleNode *dll_find(DoubleNode *head , data value){
        DoubleNode *p;
        for(p = head; p!= NULL && p->value != value; p = p->next);
         return p;

        } 

      DoubleNode *dll_delete_node(DoubleNode *head, DoubleNode *node){
         if(node){
            DoubleNode *prev = node-> prev;
            if(prev)
             prev-> next = node-> next;
             DoubleNode *next = node-> next;
              if(next)
               next-> prev = prev;
                free(node);
                return head == node ? next : head;
         }
             return head; 
         }
                  