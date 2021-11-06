//
//#include "node.h"
//#include <stdlib.h>
//#define START -20
//#define NO_INT '>'
//
//int stack_length(node** head);
//void insert_at_start(node** head,char value);
//node* delete_from_start(node** head);
//
//node* push(node** head, char value){ //we insert and delete the new node at the start of the linked list. Because in this way the LIFO functionality is implemented.
//    insert_at_start(head,value);
//}
//
//char pop(node** head){
//    char popped_char = NO_INT;
//    node* popped_node = delete_from_start(head);
//
//    if(popped_node == NULL){
//        return popped_char = NO_INT;
//    }else {
//        popped_char = popped_node->value; //the char that is popped from the stack.
//    }
//
//    return popped_char;
//}
//
//node* delete_from_start(node** head){
//    node* popped_node = NULL;
//    int length = stack_length(head);
//    printf("stack_length = %d\n",length);
//    if(length <= 0){
//        printf("Stackunderflow!!!. Push some values before popping again.\n");
//        return popped_node;
//    }
//    else if(length == 1){
//        popped_node = *head;
//        *head = NULL;
//    } else if(length > 1){
//        popped_node = *head;
//        *head = (*head)->next; //assigning head to the previously second node to make it the new first node.
//    }
//
//    return popped_node;
//}
//
//void insert_at_start(node** head,char value){
//    node* new_node = (node*) malloc(sizeof(node));
//    new_node->value = value;
//    new_node->next = NULL;
//
//    if(*head == NULL){
//        *head = new_node;
//    }
//    else {
//        new_node->next = *head; //pointing new_node to the previous first node.
//        *head = new_node; //pointing head to new first node.
//    }
//}
//
//int stack_length(node** head){
//    int count = 0;
//    node* temp = *head;
//
//    while(temp != NULL){
//        temp = temp->next;
//        count++;
//    }
//    return count;
//}
//
//void print_stack(node** head){
//    int length = stack_length(head);
//    node* temp = *head;
//
//    printf("{ ");
//    while (temp != NULL){
//        printf("%c",temp->value);
//        temp = temp->next;
//    }
//    printf(" }\n");
//}
//
//int main(){
//    node* top = NULL;
//
//    push(&top,'a');
//    push(&top,'b');
//    push(&top,'c');
//    push(&top,'d');
//    printf("Stack_length = %d\n", stack_length(&top));
//    pop(&top);
//    pop(&top);
//    pop(&top);
//    pop(&top);
//    pop(&top);
//
//    print_stack(&top);
//}