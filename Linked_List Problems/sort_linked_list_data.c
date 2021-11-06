//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node{
//    int value;
//    struct Node* next;
//}typedef node;
//
//#define NO_INT (-66)
//
//int linked_list_length(node** head);
//node* create_new_node(int value);
//void start_menu(node** head);
//
//void insert_at_start(node** head,int value){
//    if(*head == NULL){
//        *head = create_new_node(value);
//    }
//    else{
//        node* new_node = create_new_node(value);
//        new_node->next = *head;
//        *head = new_node;
//    }
//}
//
//int delete_from_start(node** head){
//    int length = linked_list_length(head);
//    int popped_int = NO_INT;
//    if(length == 0){
//        printf("Linked List is empty. Add some nodes.\n");
//        return popped_int;
//    }
//    else {
//        node* to_be_deleted_node = *head;
//        popped_int = to_be_deleted_node->value;
//        *head = (*head)->next; //skipping first node and pointing head to head.next.
//        free(to_be_deleted_node);  //freeing the memory from the deleted node.
//    }
//    return popped_int;
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
//node* create_new_node(int value){
//    node* new_node = (node*) malloc(sizeof(node));
//    new_node->value = value;
//    new_node->next = NULL;
//    return new_node;
//}
//
//void print_linked_list(node** head){
//    node* temp = *head;
//    printf("{ ");
//    while(temp != NULL){
//        printf("%d ",temp->value);
//        temp = temp->next;
//    }
//    printf("}");
//}
//
//void sort_linked_list(node** head){
//    node* temp = *head;
//    node* current_node = *head;
//    node* next_node;
//
//    if(*head == NULL){
//        printf("Linked list is empty.\n");
//        return;
//    }
//    else{
//        if(temp->next != NULL){ //it iterates, n number of times where n is the total length of linked list.
//            next_node = temp->next; //because temp is pointing to the head.
//
//            while(temp->next != NULL){
//                current_node = *head; //we are starting from head every time.
//                next_node = (*head)->next;
//
//                while(current_node->next != NULL && next_node != NULL){ //it'll break when we reach last node.
//
//                    if(current_node->value > next_node->value){ //here we are performing the swapping funcion.
//
//                        int greater_value = current_node->value;
//                        current_node->value = next_node->value;
//                        next_node->value = greater_value;
//                    }
//                    next_node = next_node->next;
//                    current_node = current_node->next;
//                }
//                temp = temp->next;
//            }
//        }
//    }
//}
//
//
//
//int main(){
//    node* head = NULL;
////    insert_at_start(&head,4);
////    insert_at_start(&head,3);
////    insert_at_start(&head,6);
////    insert_at_start(&head,3);
////    insert_at_start(&head,8);
////    insert_at_start(&head,5);
////    insert_at_start(&head,9);
////
////    print_linked_list(&head);
////    sort_linked_list(&head);
////    print_linked_list(&head);
//
////    sort_array();
//
////    print_linked_list(&head);
//    start_menu(&head);
//}
//
//void start_menu(node** head){
//    int choice = 0;
//    printf("Enter your choice:\n");
//    printf("\t1- Insert a node\n\t2- Delete a node\n\t3- Print\n\t4- Sort linked list\n\t5- Exit\n\t: ");
//    scanf("%d",&choice);
////    getchar();
//
//    while(choice != 5) {
//
//        switch (choice) {
//            int value = 0;
//            case 1:
//                printf("Enter value : ");
//                scanf("%d", &value);
//                printf("Value is %d\n",value);
//                insert_at_start(head, value);
////                print_linked_list(head);
//                break;
//            case 2:
//                delete_from_start(head);
//                print_linked_list(head);
//                break;
//            case 3:
//                print_linked_list(head);
//                break;
//            case 4:
//                sort_linked_list(head);
//                print_linked_list(head);
//                break;
//            case 5:
//            default:
//                break;
//        }
//
//
//        printf("\nEnter your choice:\n");
//        printf("\t1- Insert a node\n\t2- Delete a node\n\t3- Print\n\t4- Sort linked list\n\t5- Exit\n\t: ");
//        scanf("%d",&choice);
//    }
//}
