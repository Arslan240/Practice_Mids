//#include "poly_node.h"
//#include <stdlib.h>
//#include <string.h>
//
//char variableP = 'x';
//
//node* create_new_node(int coefficient, int exponent);
//void get_user_input(node** temp_user_poly, node** second_poly_head, node** resultant_poly_head, node** first_poly_head);
//void get_node_info_and_add_node_to_polynomial(node** temp_head);
//void implement_for_firstOrsecond_polynomial(node** temp_head);
//
//void insert_at_end(node** head, int coefficient, int exponent){
//    node* new_node = create_new_node(coefficient,exponent);
//    if(*head == NULL){
//        *head = new_node;
//    }
//    else {
//        node* temp = *head;
//        while(temp->next != NULL){
//            temp = temp->next;
//        }
//        temp->next = new_node; //linked previously last node to the new added node.
//    }
//}
//
//void delete_at_end(node** head){
//    if(*head == NULL){
//        printf("Linked list is empty.\n");
//        return;
//    }
//    else{
//        node* temp = *head;
//        node* previous_node;
//        while(temp->next != NULL){
//            previous_node = temp;
//            temp = temp->next;
//        }
//        previous_node->next = NULL;
//        free(temp); //temp is storing the last node, so we delete that allocated memory.
//    }
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
//void print_linked_list(node** head){
//    node* temp = *head;
//    printf("{ ");
//    while(temp != NULL){
//
//        printf("%c%d%c^(%c%d)",temp->coefficient > 0 ? '+' : ' ', temp->coefficient,variableP,temp->exponent > 0 ? '+':' ',temp->exponent);
//        temp = temp->next;
//    }
//    printf(" }\n");
//}
//
//node* create_new_node(int coefficient, int exponent){
//    node* new_node = malloc(sizeof(node));
//    new_node->next = NULL;
//    new_node->coefficient = coefficient;
//    new_node->exponent = exponent;
//    return new_node;
//}
//
//int main(){
//    node* temp_user_input = NULL;
//    node* first_poly_head = NULL;
//    node* second_poly_head = NULL;
//    node* resultant_poly_head = NULL;
//
//    get_user_input(&temp_user_input,&second_poly_head,&resultant_poly_head,&first_poly_head);
//}
//
//void get_user_input(node** temp_user_poly, node** second_poly_head, node** resultant_poly_head, node** first_poly_head){
//    node** temp_working_head = NULL;
//
//    int choice1 = 0;
//    printf("Enter your choice on which polynomial you want to work on?\n\t1- First Polynomial\n\t2- Second Polynomial\n\t3- Add Polynomials\n\t4- Subtract Polynomials\n\t5- Print Resultant Polynomial\n\t6- Exit: ");
//    scanf("%d",&choice1);
//
//    while(choice1 != 3) {
//        if(choice1 == 1){ //this will set the temp_working_head, which we are using generally without repeating the code in each case block.
//            temp_working_head = first_poly_head;
//        }else if( choice1 == 2){
//            temp_working_head = second_poly_head;
//        }
//
//        switch (choice1) {
//            case 1:
//                implement_for_firstOrsecond_polynomial(temp_working_head);
//                break;
//            case 2:
//                implement_for_firstOrsecond_polynomial(temp_working_head);
//                break;
//            case 3:
//                break;
//            case 4:
//                break;
//            case 5:
//                break;
//            default:
//                break;
//        }
//
//
//        printf("Enter your choice on which polynomial you want to work on?\n\t1- First Polynomial\n\t2- Second Polynomial\n\t3- Add Polynomials\n\t4- Subtract Polynomials\n\t5- Print Resultant Polynomial\n\t6- Exit: ");
//        scanf("%d",&choice1);
//    }
//}
//
//void add_two_polynomials(node** temp_poly_head,node** first_poly_head, node** second_poly_head, node** resultant_poly_head){
//
//    node* iterating_temp = *first_poly_head;
//    node* temp_added_first_poly = NULL;
//
//    while(iterating_temp != NULL){
//        insert_at_end(&temp_added_first_poly,iterating_temp->coefficient,iterating_temp->exponent);
//        iterating_temp = iterating_temp->next;
//    }
//
//
//
//}
//
//void implement_for_firstOrsecond_polynomial(node** temp_head){
//    int choice = 0;
//    printf("Enter choice : \n\t1- Enter new node\n\t2- Delete last expression\n\t3- Print Polynomial\n\t4- Exit: ");
//    scanf("%d", &choice);
//
//    while (choice != 4) {
//        switch (choice) {
//            case 1:
//                get_node_info_and_add_node_to_polynomial(temp_head);
//                break;
//            case 2:
//                delete_at_end(temp_head);
//                break;
//            case 3:
//                print_linked_list(temp_head);
//                break;
//            case 4:
//                break;
//        }
//
//        printf("Enter choice : \n\t1- Enter new node\n\t2- Delete last expression\n\t3- Print Polynomial\n\t4- Exit: ");
//        scanf("%d", &choice);
//
//    }
//}
//
//void get_node_info_and_add_node_to_polynomial(node** temp_head){
//    int coefficient = 0;
//    int exponent = 0;
//    printf("Enter the coefficient of variable : ");
//    scanf("%d", &coefficient);
//    printf("Enter the exponent : ");
//    scanf("%d", &exponent);
//
//    printf("\nExpression = %d%c^%d\n", coefficient, variableP, exponent);
//    insert_at_end(temp_head, coefficient, exponent);
//}
//
