#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d", node->data);
        node = node->next;
        if (node != NULL) {
            printf(" -> ");
        }
    }
    printf("\n");
}

void createEvenList(struct Node* head1, struct Node* head2, struct Node** head3) {
    struct Node* temp1 = head1;
    struct Node* temp2 = head2;

    while (temp1 != NULL) {
        if (temp1->data % 2 == 0) {
            append(head3, temp1->data);
        }
        temp1 = temp1->next;
    }

    while (temp2 != NULL) {
        if (temp2->data % 2 == 0) {
            append(head3, temp2->data);
        }
        temp2 = temp2->next;
    }
}

int main() {
    struct Node* S1 = NULL;
    struct Node* S2 = NULL;
    struct Node* S3 = NULL;

    // Adding elements to S1
    append(&S1, 167);
    append(&S1, 452);
    append(&S1, 367);
    append(&S1, 754);
    append(&S1, 54);

    // Adding elements to S2
    append(&S2, 645);
    append(&S2, 677);
    append(&S2, 845);
    append(&S2, 966);
    append(&S2, 460);

    // Creating S3 with even elements from S1 and S2
    createEvenList(S1, S2, &S3);

    // Printing the lists
    printf("Lista S1: ");
    printList(S1);

    printf("Lista S2: ");
    printList(S2);

    printf("Lista S3 (Elementy parzyste): ");
    printList(S3);

    return 0;
}
