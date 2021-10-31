//#include "node.h"
//#include <stdlib.h>
//
//
////struct node{ //it is included in node.h
////    char value;
////    struct node* next;
////}typedef node;
//
//node* create_new_node(char value);
//
//void enqueue(node** head, node** rear,char value){ //because in queue we add at rear
//    if(*head == NULL){
//        node* new_node = create_new_node(value);
//        *head = new_node;
//        *rear = *head; //making rear and head equal if the queue was empty before.
//    }else{
//        node* temp = *head;
//        node* new_node = create_new_node(value);
//        while(temp->next != NULL){
//            temp = temp->next;
//        }//at the end temp will have last node.
//
//        //we'll connect previously last node to the new last node.
//        temp->next = new_node; //connecting last node to the new node.
//        (*rear) = new_node; //making the new_node the new rear.
//    }
//
//}
//
//void dequeue(node** head, node** rear){
//    if(*head == NULL){
//        printf("Queue is empty. Enqueue some values.\n");
//        return;
//    }
//    else if(*head == *rear){
//        node* temp = *head;
//        free(temp);
//        *head = NULL;
//        *rear = NULL;
//    }
//    else {
//        node* temp = *head;
//        while (temp->next != *rear){ //we check if temp.next is pointing to rear then we break the loop and temp will have second last node. We can make it last by setting next to NULL.
//            temp = temp->next;
//        }
//
//        //freeing the last node.
//        node* last_node = temp->next;
//        free(last_node);
//
//        //we making temp the last node. And pointing rear to this node.
//        temp->next = NULL;
//        *rear = temp;
//    }
//}
//
//void print_linked_queue(node* head){
//    node* temp = head;
//    printf("{ ");
//    while(temp != NULL){
//        printf("%c ",temp->value);
//        temp = temp->next;
//    }
//    printf("}\n");
//}
//
//node* create_new_node(char value){
//    node* new_node = (node*) malloc(sizeof(node));
//    new_node->value = value;
//    new_node->next = NULL;
//    return new_node;
//}
//
//
//int main(){
//
//    node* head = NULL;
//    node* rear = NULL;
//
//    enqueue(&head,&rear,'a');
//    enqueue(&head,&rear,'b');
//    enqueue(&head,&rear,'d');
//    enqueue(&head,&rear,'c');
//    enqueue(&head,&rear,'d');
//    enqueue(&head,&rear,'e');
//    enqueue(&head,&rear,'f');
//
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//    dequeue(&head,&rear);
//    print_linked_queue(head);
//
//
//    enqueue(&head,&rear,'c');
//    enqueue(&head,&rear,'d');
//    enqueue(&head,&rear,'e');
//    enqueue(&head,&rear,'f');
//
//    print_linked_queue(head);
//
//
//}
