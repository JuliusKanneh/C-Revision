#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node *create_linked_list(){
    // Initialize a nodes 
    struct node *head = NULL; 
    struct node *one = NULL; 
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    printf("Memory allocated for nodes\n");

    // Assign data to nodes
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Save address of first node in head
    head = one;

    return head;
}

void print_node_data(struct node *ptr){
    while(ptr != NULL){
        printf("Node data: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void linked_list_demo(){
    struct node *head = create_linked_list();
    print_node_data(head);
}

// int main() {
//     struct node *head = create_linked_list();
//     print_node_data(head);
//     return 0;
// }