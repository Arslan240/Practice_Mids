//#include "poly_node.h"
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//
//#define SUBTRACTION '-'
//#define ADDITION '+'
//#define FIRST '1'
//#define SECOND '2'
//
//char variableP = 'x';
//
//node* create_new_node(int coefficient, int exponent);
//void get_user_input(node** temp_user_poly, node** second_poly_head, node** resultant_poly_head, node** first_poly_head);
//void get_node_info_and_add_node_to_polynomial(node** temp_head);
//void implement_for_firstOrsecond_polynomial(node** temp_head,char node_type);
//int linked_list_length(node** head);
//void simplify_polynomial(node** head);
//void add_two_polynomials(node** first_poly_head, node** second_poly_head, node** resultant_poly_head, char operation);
//void add_unique_expressions_to_resultant_linkedlist(node** first_poly_head, node** second_poly_head, node** resultant_head);
//bool is_exponent_in_resultant_polynomial(node** resultant_poly_node, node* comparing_node);
//void duplicate_after_negation(node** to_be_duplicated, node** destination);
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
//void delete_at_start(node** head){
//    if(*head == NULL){
//        printf("Linked list is empty. Add some nodes\n");
//        return;
//    }
//    else{
//        node* to_be_deleted = *head;
//        *head = (*head)->next;
//        free(to_be_deleted);
//    }
//}
//
//void delete_nth_node(node** head, int position){
//    int length = linked_list_length(head);
//
//    if(*head == NULL){
//        printf("Linked list is empty. Add some nodes\n");
//        return;
//    }
//    else{
//        if(position == 0){
//            delete_at_start(head);
//        }else if(position == length){
//            delete_at_end(head);
//        }
//        else{
//            node* temp = *head;
//            int count = 0;
//            node* previous_node;
//            while(temp->next != NULL && count != position - 1){ //using position - 1 because inside loop we update the temp to the next node. we don't want temp to be on position + 1 so insted we use position - 1.
//                previous_node = temp; //stores previous node, temp stores node to be deleted.
//                temp = temp->next; //at end temp stores the node that needs to be deleted.
//                count++;
//            }
//
//            previous_node->next = temp->next; //making the connection and deleting temp node.
//            free(temp);
//
//        }
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
//    printf("---------------------------------------------------------------------\n");
//    printf("Enter your choice on which polynomial you want to work on?\n\t1- First Polynomial\n\t2- Second Polynomial\n\t"
//                    "3- Add Polynomials\n\t4- Subtract Polynomials\n\t5- Print Resultant Polynomial\n\t6- Exit: ");
//    scanf("%d",&choice1);
//
//    while(choice1 != 6) {
//        if(choice1 == 1){ //this will set the temp_working_head, which we are using generally without repeating the code in each case block.
//            temp_working_head = first_poly_head;
//        }else if( choice1 == 2){
//            temp_working_head = second_poly_head;
//        }
//
//        switch (choice1) {
//            case 1:
//                implement_for_firstOrsecond_polynomial(temp_working_head,FIRST);
////                print_linked_list(temp_working_head);
//                break;
//            case 2:
//                implement_for_firstOrsecond_polynomial(temp_working_head,SECOND);
//                break;
//            case 3:
//                add_two_polynomials(first_poly_head,second_poly_head,resultant_poly_head,ADDITION);
//                break;
//            case 4:
//                add_two_polynomials(first_poly_head,second_poly_head,resultant_poly_head,SUBTRACTION);
//                break;
//            case 5:
//                printf("\n---------------------------------------------------------------------------------------\n");
//                printf("Resultant polynomial is :");
//                print_linked_list(resultant_poly_head);
//                printf("---------------------------------------------------------------------------------------\n\n");
//                break;
//            case 6:
//            default:
//                printf("Please enter valid entry.\n");
//                break;
//        }
//
//        printf("---------------------------------------------------------------------\n");
//        printf("Enter your choice on which polynomial you want to work on?\n\t1- First Polynomial\n\t2- Second Polynomial\n\t"
//               "3- Add Polynomials\n\t4- Subtract Polynomials\n\t5- Print Resultant Polynomial\n\t6- Exit: ");
//        scanf("%d",&choice1);
//    }
//}
//
//void add_two_polynomials(node** first_poly_head, node** second_poly_head, node** resultant_poly_head, char operation){
//    *resultant_poly_head = NULL;
//    if(first_poly_head == NULL){
//        printf("First polynomial is empty. Please enter an expression.\n");
//    }
//    if(second_poly_head == NULL){
//        printf("Second polynomial is empty. Please enter an expression\n");
//    }
//
//    node* second_poly_node_negated = NULL;
//    if(first_poly_head != NULL && second_poly_head != NULL){
//
//        simplify_polynomial(first_poly_head); //we simplify the polynomial to add all the values with similar coefficients, within the same polynomial.
//        simplify_polynomial(second_poly_head);
//
//        printf("---------------------------------------------------------------------------------------\n");
//        printf("Simplified first polynomial :");
//        print_linked_list(first_poly_head);
//        printf("Simplified second polynomial :");
//        print_linked_list(second_poly_head);
//
//        if(operation == SUBTRACTION){ //if it's true then we need to multiply -1 with every coefficient of the second polynomial, and store the result in a new linked list. SO that we can use original second polynomial for addition if needed.
//            duplicate_after_negation(second_poly_head, &second_poly_node_negated);
//            printf("Simplified second polynomial after negation :");
//            print_linked_list(&second_poly_node_negated);
//        }
//
//
//        node* outer_node_first = *first_poly_head;
//
//        while(outer_node_first != NULL){
//            int value = outer_node_first->coefficient;
//            node* temp_second = NULL;
//
//            if(operation == ADDITION){
//                temp_second = *second_poly_head;
//            }else if(operation == SUBTRACTION){ //if the operation is subtraction then we assign negated second polynomial to the inner temp.
//                temp_second = second_poly_node_negated;
//            }
//
//            while(temp_second != NULL){
//
//                if(temp_second->exponent == outer_node_first->exponent){ //if there are two nodes with similar exponent then we add their coefficients.
//                    value += temp_second->coefficient;
//                }
//                temp_second = temp_second->next;
//
//            } //when we come out of loop we have resultant value of coefficients with similar exponents in the value variable.
//
//            insert_at_end(resultant_poly_head,value,outer_node_first->exponent); //here we create a new resultant linked list, to store the resultant polynomial.
//
//            outer_node_first = outer_node_first->next;
//        }
//    }
//
//    if(operation == ADDITION){
//        add_unique_expressions_to_resultant_linkedlist(first_poly_head,second_poly_head,resultant_poly_head);
//    }else if(operation == SUBTRACTION){
//        add_unique_expressions_to_resultant_linkedlist(first_poly_head,&second_poly_node_negated,resultant_poly_head);
//    }
//
//    printf("\n---------------------------------------------------------------------------------------\n");
//    printf("Resultant polynomial after %s is : ",operation == '+'?"addition":"subtraction");
//    print_linked_list(resultant_poly_head);
//    printf("---------------------------------------------------------------------------------------\n\n");
//}
//
//void duplicate_after_negation(node** to_be_duplicated, node** destination){
//    node* temp = *to_be_duplicated;
//
//    while(temp != NULL){
//        int coefficient = (temp->coefficient) * (-1); //here we multiply all the coefficients of second polynomial with -1, when we need to subtract second polynomial from the first one.
//        int exponent = temp->exponent;
//        insert_at_end(destination,coefficient,exponent);
////        printf("Inserted to negated second poly node.\n");//todo remove
//        temp = temp->next;
//    }
//}
//
//void simplify_polynomial(node** head){ // this method will add the coefficients with similar exponent, and simplify the polynomial.
//    if(*head == NULL){
//        printf("Linked list is empty. Add some nodes first.\n");
//        return;
//    }
//
//    node* outer_node = *head;
//    node* temp;
////    print_linked_list(head); //todo remove
//    while(outer_node != NULL){
//        temp = *head; // on first iteration, it will be equal to head but after that it will start from the outer node, if it is second, then temp will start from second, because we have already compared the first node so we don't need to compare it again.
//        int count = 0;
//        int length = linked_list_length(head);
//        int value = outer_node->coefficient;
////        printf("\n\n simplify polynomial, inside (outer_node != NULL) while loop.\n");
//        while(temp != NULL && count != length){
////            printf("Before, Temp = %d,\ttemp.exponent = %d,\ttemp.coefficient = %d,\ttemp.next = %d\n",temp,temp->exponent,temp->coefficient,temp->next);
////            printf("INside simplify polynomial functtion. Inside while(temp != NULL) and count = %d\n",count);
//            count++;
//            if(outer_node != temp && temp->exponent == outer_node->exponent){ //we add outer_node != temp, because we don't want it to compare with itself.
//                //we don't have to specify here what operation to do like in add_two_polynomials function, because it is inside the similar polynomial, it'll do whatever is supposed to happen, by itself using operators.
////                printf("temp->exponent = %d\touter_node->exponent = %d\n",temp->exponent,outer_node->exponent);
////                printf("INside simplify polynomial if condition\n"); //todo remove after debugging
//                value += temp->coefficient; //here we add the two coefficients to the value, because before loop, we store outernode's coefficient in it so we can just do += the temp.coefficient.
////                printf("coefficient = %d,\tvalue = %d\n",temp->coefficient,value); //todo remove
////                printf("count that is being passed to delete_nth_node = %d\n",count);
////                printf("Length of node passed before deleting nth node : %d\n", linked_list_length(head));
//                delete_nth_node(head,count); //here we delete the node, which had similar exponent and is processed to either subtract or add.
////                printf("Length of node passed after deleting nth node : %d\n", linked_list_length(head));
////                printf("Printing linked list after deleting nth node.\n");sdf
//            }
////            printf("Before, Temp = %d,\ttemp.exponent = %d,\ttemp.coefficient = %d,\ttemp.next = %d\n",temp,temp->exponent,temp->coefficient,temp->next);
//            temp = temp->next;
////            printf("After,Temp = %d,\ttemp.exponent = %d,\ttemp.coefficient = %d,\ttemp.next = %d\n",temp,temp->exponent,temp->coefficient,temp->next);
//        }
//
//        //when we break out of the loop, now we have resultant added value in value, which we can assign to the outer node's coefficient.
//        outer_node->coefficient = value;
//        outer_node = outer_node->next;
//    }
//    print_linked_list(head);
//}
//
//void add_unique_expressions_to_resultant_linkedlist(node** first_poly_head, node** second_poly_head, node** resultant_head){
//    if(first_poly_head == NULL){
//        printf("First polynomial is empty. Please add a polynomial\n");
//    }
//    if(second_poly_head == NULL){
//        printf("second polynomial is empty. Please add a polynomial\n");
//        return;
//    }
//
//    node* first_or_second_temp;
//    node* temp_second_head = *second_poly_head;
//    node* temp_resultant_head = *resultant_head;
//
//
//    for (int i = 0; i < 2; ++i) { //we'll do this for both first polynomial as well as second polynomial, so we are using this loop. We assign to the first_or_second_temp accordingly to add non calculated nodes.
//        if(i == 0){
//            first_or_second_temp = *first_poly_head;
//        }else if(i == 1){
//            first_or_second_temp = *second_poly_head;
//        }
//
//        while(first_or_second_temp != NULL){
//
//            if(is_exponent_in_resultant_polynomial(resultant_head, first_or_second_temp) != true) { //if the exponent is not in the resultant node, then we add it to the resultant node.
//                int coefficient = first_or_second_temp->coefficient;
//                int exponent = first_or_second_temp->exponent;
//                insert_at_end(resultant_head, coefficient, exponent);
//            }
//
//            first_or_second_temp = first_or_second_temp->next;
//        }
//
//    }
//}
//
//bool is_exponent_in_resultant_polynomial(node** resultant_poly_node, node* comparing_node){
//    bool is_present = false;
//    node* temp = *resultant_poly_node;
//
//    while(temp != NULL){
//        if(comparing_node->exponent == temp->exponent){
//            is_present = true;
//            break;
//        }
//        temp = temp->next;
//    }
//
//    return is_present;
//}
//
//void implement_for_firstOrsecond_polynomial(node** temp_head,char node_type){ //it gets information for a polynomial and stores it in whatever head is passed to it. So it is dynmaic funciton and we can create as many different linked list as we want.
//    int choice = 0;
//
//    printf("\nWorking on %s node\nEnter choice : \n\t1- Enter new node\n\t2- Delete last expression\n\t3- Print Polynomial\n\t4- Simplify Polynomial\n\t5- Exit\n\t: ",node_type == '1'?"First":"Second");
//    scanf("%d", &choice);
//
//    while (choice != 5) {
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
//                simplify_polynomial(temp_head);
//                break;
//            case 5:
//                break;
//        }
//
//        printf("Working on %s node\nEnter choice : \n\t1- Enter new node\n\t2- Delete last expression\n\t3- Print Polynomial\n\t4- Simplify Polynomial\n\t5- Exit\n\t: ",node_type == '1'?"First":"Second");
//        scanf("%d", &choice);
//
//    }
//}
//
//void get_node_info_and_add_node_to_polynomial(node** temp_head){ //if user wants to enter a new node to the polynomial linked list, then we call this method and this method will get all the important ifo.
//    int coefficient = 0;
//    int exponent = 0;
//    printf("Enter the coefficient of variable : ");
//    scanf("%d", &coefficient);
//    printf("Enter the exponent : ");
//    scanf("%d", &exponent);
//    getchar();
//
//    insert_at_end(temp_head, coefficient, exponent);
//    printf("-----------------------------------------------------\n");
//    print_linked_list(temp_head);
//    printf("-----------------------------------------------------\n");
//}
//
