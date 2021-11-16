#include "node.h"
#include <stdlib.h>

node* create_new_node(char value);
int linked_list_length(node** head);

void delete_at_end(node** head){
    if(*head == NULL){
        printf("Linked list is empty.\n");
        return;
    }

    node* temp = *head;
    node* previous_node = temp;

    while(temp->next != NULL){
        previous_node = temp;
        temp = temp->next;
    }

    free(temp);
    previous_node->next = NULL;
}

void delete_at_start(node** head){
    if(*head == NULL){
        printf("Linked list is empty.\n");
        return;
    }

    node* to_be_deleted = *head;
    *head = (*head)->next;
    free(to_be_deleted);
}

void delete_at_nth_node(node** head, int position){
    int length = linked_list_length(head);
    if(*head == NULL || length == 0){
        printf("Linked list is empty.\n");
        return;
    }
    if(position > length){
        printf("Linked list doesn't have enough nodes\n");
        return;
    }

    if(position == 1){
        delete_at_start(head);
    }else if(position == length){
        delete_at_end(head);
    }else if(position < length){
        int count = 0;
        node* temp = *head;
        node* previous_node = temp;

        while (temp->next != NULL && count != position - 1){
            count++;
            previous_node = temp;
            temp = temp->next;
        } //when we break out of this loop, we have nth node in temp.

        previous_node->next = temp->next;
        free(temp);
    }
}

void insert_at_end(node** head, char value){
    node* new_node = create_new_node(value);
    if(*head == NULL){
        *head = new_node;
    }else{
        node* temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

int linked_list_length(node** head){
    int count = 0;
    node* temp = *head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

node* create_new_node(char value){
    node* new_node = (node*) malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void print_linked_list(node** head){
    node* temp =*head;
    printf("{ ");
    while(temp != NULL){
        printf("%c",temp->value);
        temp = temp->next;
    }
    printf(" }\n");
}

void create_dummy_nodes(node** head){
    insert_at_end(head,'a');
    insert_at_end(head,'c');
    insert_at_end(head,'d');
    insert_at_end(head,'w');
    insert_at_end(head,'f');
    insert_at_end(head,'d');
    insert_at_end(head,'c');
}

void start_menu(node** head){
    int choice = 0;
    printf("Enter your choice.\n\t1- Insert new node\n\t2- Delete at end\n\t3- Delete nth node\n\t4- Linked list lenght\n\t5- Print Linked list\n\t6- Exit\n\t: ");
    scanf("%d",&choice);

    while(choice != 6){
        char value;
        int position;
        switch (choice) {
            case 1:
                printf("Enter value you want to enter : ");
                scanf("%c",&value);
                insert_at_end(head,value);
                break;
            case 2:
                delete_at_end(head);
                print_linked_list(head);
                break;
            case 3:
                printf("Enter position at which you want to delete : ");
                scanf("%d",&position);
                delete_at_nth_node(head,position);
                break;
            case 4:
                printf("Linked list length : %d\n", linked_list_length(head));
                break;
            case 5:
                print_linked_list(head);
                break;
            case 6:
            default:
                break;
        }
        printf("Enter your choice.\n\t1- Insert new node\n\t2- Delete at end\n\t3- Delete nth node\n\t4- Linked list lenght\n\t5- Print Linked list\n\t6- Exit\n\t: ");
        scanf("%d",&choice);
    }
}

node* shuffle_merge(node** first_head, node** second_head, node** resultant_head){
    int first_length = linked_list_length(first_head);
    int second_length = linked_list_length(second_head);

    if(*first_head == NULL &&  *second_head == NULL){
        return *(resultant_head = NULL);
    }else if(*first_head == NULL){
        return *(resultant_head = second_head);
    }else if(*second_head == NULL){
        return *(resultant_head = first_head);
    }

    if(*first_head != NULL && *second_head != NULL){ //when both have some values.
        if(first_length > second_length){
            node* first_temp = *first_head;
            node* second_temp = *second_head;

            while(first_temp != NULL){
                node* holding_temp = first_temp->next;
                first_temp = first_temp->next;
            }
        }
    }
}

int main(){
    node* head = NULL;
    create_dummy_nodes(&head);
    start_menu(&head);
}

