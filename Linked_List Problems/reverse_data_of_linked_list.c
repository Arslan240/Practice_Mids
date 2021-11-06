//#include "node.h"
//#include <stdlib.h>
//#include <string.h>
//
//#define EMPTY -1
//#define SIZE 10
//#define NO_INT '<'
//
//int stack_top = EMPTY;
//char stack[SIZE];
//
//void push(char value){
//    int stack_length = strlen(stack);
//    if(stack_top >= stack_length){
//        printf("Stackoverflow!!!. Pop some values OR increase the size of stack\n");
//        return;
//    }
//    else {
//        stack_top++;
//        stack[stack_top] = value;
//    }
//}
//
//char pop(){
//    char popped_char = NO_INT;
//    if(stack_top <= EMPTY){
//        printf("Stackunderflow!!!. Push some values before popping again\n");
//        return popped_char;
//    }else {
//        popped_char = stack[stack_top]; //popped char is stored here.
//        stack_top--;
//    }
//    return popped_char;
//}
//
//void print_stack(){
//    int length = strlen(stack);
//    if(length <= 0){
//        printf("Stack is empty. Can't be printed.\n");
//        return;
//    }
//
//    printf("Stack = {");
//    for (int i = stack_top; i >= 0 ; --i) {
//        printf("%c",stack[i]);
//    }
//    printf(" }\n");
//}
//
//node* creat_new_node(char value);
//int linked_list_length(node** head);
//
//void insert_at_start(node** head,char value){
//    if(*head == NULL){
//        *head = creat_new_node(value);
//    }
//    else{
//        node* new_node = creat_new_node(value);
//        new_node->next = *head;
//        *head = new_node;
//    }
//}
//
//char delete_from_start(node** head){
//    int length = linked_list_length(head);
//    char popped_char = NO_INT;
//    if(length == 0){
//        printf("Linked List is empty. Add some nodes.\n");
//        return popped_char;
//    }
//    else {
//        node* to_be_deleted_node = *head;
//        popped_char = to_be_deleted_node->value;
//        *head = (*head)->next; //skipping first node and pointing head to head.next.
//        free(to_be_deleted_node);  //freeing the memory from the deleted node.
//    }
//    return popped_char;
//}
//
//int linked_list_length(node** head){
//    int count = 0;
//    node* temp = *head;
//    while(temp != NULL){
//        temp = temp->next;
//        count++;
//    }
//    return count;
//}
//
//node* creat_new_node(char value){
//    node* new_node = (node*) malloc(sizeof(node));
//    new_node->value = value;
//    new_node->next = NULL;
//    return new_node;
//}
//
//void print_linked_list(node* head){
//    node* temp = head;
//    printf("{ ");
//    while(temp != NULL){
//        printf("%c",temp->value);
//        temp = temp->next;
//    }
//    printf(" }");
//}
//
//void reverse_data_of_linked_list(node** head){
//    if(SIZE < linked_list_length(head)){
//        printf("Stack is shorter than the linked list. Increase the size of linked list.\n");
//        return;
//    }
//    else {
//        node* temp = *head;
//        while(temp != NULL){
//            push(temp->value); //pushing the values of linked_list starting from the start of list to a stack. We'll pop and get in reversed order.
//            temp = temp->next;
//        }
//
//        temp = *head;
//        while(temp != NULL){
//            temp->value = pop(); //we pop value from the stack and start adding it to the linked list starting from start.
//            temp = temp->next;
//        }
//    }
//
//}
//
//
//
//int main(){
//    node* head = NULL;
//    insert_at_start(&head,'a');
//    insert_at_start(&head,'b');
//    insert_at_start(&head,'c');
//    insert_at_start(&head,'d');
//    insert_at_start(&head,'e');
//    print_linked_list(head);
//
////    push('d');
////    push('c');
////    push('b');
////    push('a');
////    print_stack();
//
//    reverse_data_of_linked_list(&head);
//    print_stack();
//    print_linked_list(head);
//
//
//}