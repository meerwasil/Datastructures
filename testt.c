#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"linked_list.h"
 
 int main(void){
    Node* values = NULL;
    for(int i = 0 ; i < 10; i++)
      values = ll_prepend(values, i);
       ll_print(values);
        assert(ll_find(values,10) == NULL);
        Node* value_5 = ll_find(values , 5);
        ll_insert_before(values, value_5,11);
         ll_print(values);
         return 0;
 }