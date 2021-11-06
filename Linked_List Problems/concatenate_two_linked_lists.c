//#include "node.h"
//#include <stdlib.h>
//
//node* create_new_node(char value);
//int linked_list_length(node** head);
//void print_linked_list(node** head);
//void concatenate_two_linked_lists(node** head1, node** head2, node** resultant_head);
//
//void insert_at_end(node** head,char value){
//    if(*head == NULL){
//        *head = create_new_node(value);
//    }
//    else{
//        node* last_node = *head;
//        node* new_node = create_new_node(value);
//
//        while(last_node->next != NULL){
//            last_node = last_node->next;
//        }
//        last_node->next = new_node; //added at last node.
//    }
//}
//
//void delete_from_end(node** head){
//    node* to_be_deleted_node = NULL;
//
//    if(*head == NULL){
//        printf("Linked list is empty. Add some nodes first.\n");
//        return;
//    }
//    else{
//        node* temp = *head;
//        node* second_last_node = NULL;
//        while(temp->next != NULL){
//            second_last_node = temp;
//            temp = temp->next;
//        }
//
//        second_last_node->next = NULL; //making the second_last_node the last one.
//    }
//}
//
//node* create_new_node(char value){
//    node* new_node = (node*) malloc(sizeof(node));
//    new_node->value = value;
//    new_node->next = NULL;
//    return new_node;
//}
//
//int linked_list_length(node** head){
//    node* temp = *head;
//    int count = 0;
//
//    while(temp != NULL){
//        count++;
//        temp = temp->next;
//    }
//    return count;
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
//void concatenate_two_linked_lists(node** head1, node** head2, node** resultant_head){
//    if(*head1 == NULL) {
//        printf("Linked list 1 is null.\n");
//        return;
//    }else if( *head2 == NULL){
//        printf("Linked list 2 is null.\n");
//        return;
//    }else {
//        *resultant_head = *head1; //here we point the resultant list to the start of the first list.
//        node* temp1 = *head1;
//        while(temp1->next != NULL){
//            temp1 = temp1->next;
//        }
//        temp1->next = *head2; //here we link first list's last node to the second list's head.
//    }
//}
//
//int main(){
//    node* head1 = NULL;
//    node* head2 = NULL;
//    node* resultant_list = NULL;
//
//    insert_at_end(&head1,'a');
//    insert_at_end(&head1,'b');
//    insert_at_end(&head1,'c');
//    insert_at_end(&head1,'d');
//    insert_at_end(&head1,'e');
//    print_linked_list(&head1);
//
//
//    insert_at_end(&head2,'f');
//    insert_at_end(&head2,'g');
//    insert_at_end(&head2,'h');
//    insert_at_end(&head2,'i');
//    print_linked_list(&head2);
//
//    concatenate_two_linked_lists(&head1,&head2,&resultant_list);
//    print_linked_list(&resultant_list);
//    insert_at_end(&head2,'s');
//    print_linked_list(&resultant_list);
//
//}
//
