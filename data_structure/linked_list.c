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

// --------------- Linked List Operations ----------------
// Traversal
void traversal(struct node *head){
    struct node *temp = head;
    printf("Elements in the linked list:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Insertion
// At the beginning 
struct node* insert_at_beginning(struct node *head, int new_data){
    // 1. Allocate new node 
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    // 2. Store data
    new_node->data = new_data;

    // 3.  Change next of new node to point to head
    new_node->next = head;

    // 4. Change the next new node to point to head
    head = new_node;

    // 5. Return new head
    return head;
}

// At the end
struct node* insert_at_end(struct node *head, int new_data){
    // 1. Allocate new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    // 2. Store data 
    new_node->data = new_data;

    // 3. Set next of new node to NULL
    new_node->next = NULL;

    // 4. Traverse to the last node
    struct node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }

    // 5. Change next of last node
    temp->next = new_node;

    // 6. Return head
    return head;
}

// At the middle (after a given node)
struct node* insert_at_the_middle(struct node *head, struct node *position_node, int new_data){
    // 1. Allocate new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    // 2. Store data
    new_node->data = new_data;

    // 3. Traverse to the the node before the position_node
    struct node* temp = head;
    while (temp->next != position_node){
        temp = temp->next;
    }

    // 4. Change next of new node to point to position_node
    new_node->next = position_node;

    // 5. Change next of previous node to point to new node
    temp->next = new_node;
    // 6. Return head
    return head;
}

// Deletion 
// From the beginning 
struct node* delete_from_beginning(struct node *head){
    if (head == NULL){
        printf("List is empty, nothing to delete\n");
        return head;
    }
    struct node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// From the end
struct node* delete_from_end(struct node *head){
    if (head == NULL){
        printf("List is empty, nothing to delete\n");
        return head;
    }
    if (head->next == NULL){
        free(head);
        return NULL;
    }
    struct node* temp = head;
    while (temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

// From the middle
struct node* delete_from_middle(struct node *head, struct node *position_node){
    if (head == NULL){
        printf("List is empty, nothing to delete\n");
        return head;
    }
    if (head == position_node){
        head = head->next;
        free(position_node);
        return head;
    }
    struct node* temp = head;
    while (temp->next != position_node){
        temp = temp->next;
    }
    temp->next = position_node->next;
    free(position_node);
    return head;
}

// Searching 
int search(struct node *head, int key){
    struct node* temp = head;
    int position = 0;
    while (temp != NULL){
        if (temp->data == key){
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1; // Not found
}

// Sorting
void sort_linked_list(struct node *head){
    if (head == NULL){
        return;
    }
    struct node *i, *j;
    int temp;
    for (i = head; i != NULL; i = i->next){
        for (j = i->next; j != NULL; j = j->next){
            if (i->data > j->data){
                // Swap data
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

// --------------- Demo Function ----------------
void linked_list_demo(){
    struct node *head = create_linked_list();
    // print_node_data(head);
    traversal(head);
    head = insert_at_beginning(head, 0);
    traversal(head);
    head = insert_at_end(head, 4);
    traversal(head);
    head = insert_at_the_middle(head, head->next->next, 99); // Insert 99 after second node
    traversal(head);
    head = delete_from_beginning(head);
    traversal(head);
    head = delete_from_end(head);
    traversal(head);
    head = delete_from_middle(head, head->next); // Delete second node
    traversal(head);
    int key = 3;
    int position = search(head, key);
    if (position != -1){
        printf("Element %d found at position %d\n", key, position);
    } else {
        printf("Element %d not found in the list\n", key);
    }
    sort_linked_list(head);
    printf("Sorted linked list:\n");
    traversal(head);
}