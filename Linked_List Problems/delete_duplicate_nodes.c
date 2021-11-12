//#include "node.h"
//#include <stdlib.h>
//
//node* create_new_node(char value);
//int linked_list_length(node** head);
//
//void delete_duplicate_nodes(node** head){
//    int length = linked_list_length(head);
//    node* source_node = *head;
//
//    for (int i = 0; i < length && source_node != NULL; ++i) {
//        node* temp = *head;
//        node* previous_node = temp;
//        while(temp != NULL){
//            if(temp->value == source_node->value && (temp != source_node) && (previous_node != temp)){ //we check that the reference node should not be compared to itself,
//                previous_node->next = temp->next;
//                node* to_be_deleted_node = temp;
//                free(to_be_deleted_node);
//            }
//            previous_node = temp;
//            temp = temp->next;
//        }
//        source_node = source_node->next;
//    }
//
//}
//
//void insert_at_end(node** head, char value){
//    node* new_node = create_new_node(value);
//
//    if(*head == NULL){
//        *head = new_node;
//    }else{
//        node* temp = *head;
//        while(temp->next != NULL){
//            temp = temp->next;
//        }
//        temp->next = new_node;
//    }
//}
//
//void delete_from_end(node** head){
//    if(*head == NULL){
//        printf("Linked list is empty. Add some nodes.\n");
//        return;
//    }
//    else{
//        node* temp = *head;
//        node* previous_node;
//        while(temp->next != NULL){
//            previous_node = temp;
//            temp = temp->next;
//        }
//        free(temp);
//        previous_node->next = NULL;
//    }
//}
//
//void print_linked_list(node** head){
//    node* temp = *head;
//    printf("{ ");
//    while(temp != NULL){
//        printf("%c",temp->value);
//        temp = temp->next;
//    }
//    printf(" }\n");
//}
//
//int linked_list_length(node** head){
//    int count = 0;
//    node* temp = *head;
//
//    while(temp != NULL){
//        count++;
//        temp = temp->next;
//    }
//    return count;
//}
//
//node* create_new_node(char value){
//    node* new_node = (node*) malloc(sizeof(node));
//    new_node->next = NULL;
//    new_node->value = value;
//    return new_node;
//}
//
//int main(){
//    node* head = NULL;
//    for (int i = 0; i < 10; ++i) {
//        char value;
//        printf("Enter character for node : ");
//        scanf(" %c",&value);
//        insert_at_end(&head,value);
//        getchar();
//    }
//    print_linked_list(&head);
//    delete_duplicate_nodes(&head);
//    print_linked_list(&head);
//}