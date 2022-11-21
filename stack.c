#include<stdio.h>
#define MAX 4
int top = -1;
int stack[MAX];
void push(int data){
    if(top >= MAX - 1)
    {
        printf("stack is full\n");
        return;
    }
    top ++;
    stack[top] = data;
    printf("push operation is successful\n");
    return;
}
void pop(int *data){
    if(top == -1)
    {
        printf("stack is empty\n");
        return;
    }
    *data = stack[top];
    top -- ;
    printf("pop operation is successful\n");
    return;
}
int main(){
    int popped_data;
     push(10);
     push(20);
    // push(30);
     //push(40);
    // push(50);

     pop(&popped_data);
     printf("%d\n",popped_data);
     pop(&popped_data);
     printf("%d\n",popped_data);
     //pop(&popped_data);
     //printf("%d",popped_data);
     //pop(&popped_data);
     //printf("%d\n",popped_data);
     //pop(&popped_data);
     //printf("%d",popped_data);
}

    


