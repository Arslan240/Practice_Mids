#include "node.h"
#include <stdlib.h>

node* create_new_node(char value);

void insert_at_end(node** head,char value){
    node* new_node = create_new_node(value);
    if(*head == NULL){
        *head = new_node;
    }
    else {
        node* temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node; //assigned new_node to the previously last node.
    }
}

void delete_from_end(node** head){
    if(*head == NULL){
        printf("Linked list is empty. Add some nodes.\n");
        return;
    }
    else{
         node* temp = *head;
        node* second_last_node;
         while(temp->next != NULL){
             second_last_node = temp;
             temp = temp->next;
         }
         free(temp); //temp now stores last node, which will be deleted.
         second_last_node->next = NULL;
    }
}

node* create_new_node(char value){
    node* new_node = (node*) malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

int count_even_nodes_and_print(node** head){
    int count = 0;
    int even_count = 0;

    node* temp = *head;
    printf("{ ");
    while(temp != NULL){
        count++;
        if(count % 2 == 0){
            even_count++;
            printf("%c",temp->value);
        }
        temp = temp->next;
    }
    printf(" }\n");

    return even_count;
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

int main(){
    node* head = NULL;
    insert_at_end(&head,'a');
    insert_at_end(&head,'b');
    insert_at_end(&head,'c');
    insert_at_end(&head,'d');
    insert_at_end(&head,'e');
    insert_at_end(&head,'f');
    insert_at_end(&head,'g');
    insert_at_end(&head,'h');
    insert_at_end(&head,'i');

    printf("Even nodes are %d\n",count_even_nodes_and_print(&head));
}
