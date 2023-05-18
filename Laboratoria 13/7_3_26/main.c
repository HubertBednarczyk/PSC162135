#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

struct element* minimum(struct element* head) {
    if (head == NULL) {
        return NULL;
    }

    struct element* min = head;
    struct element* current = head->next;

    while (current != NULL) {
        if (current->i < min->i) {
            min = current;
        }
        current = current->next;
    }

    return min;
}

struct element* minimum_bez_glowy(struct element** head) {
    if (*head == NULL) {
        return NULL;
    }

    struct element* min = *head;
    struct element* current = *head;

    while (current != NULL) {
        if (current->i < min->i) {
            min = current;
        }
        current = current->next;
    }

    return min;
}

int main() {
    struct element* head = (struct element*)malloc(sizeof(struct element));
    head->i = 5;

    struct element* element2 = (struct element*)malloc(sizeof(struct element));
    element2->i = 3;

    struct element* element3 = (struct element*)malloc(sizeof(struct element));
    element3->i = 7;

    head->next = element2;
    element2->next = element3;
    element3->next = NULL;

    struct element* min = minimum(head);
    printf("Minimum (z glowa): %d\n", min->i);

    struct element* minWithoutHead = minimum_bez_glowy(&head);
    printf("Minimum (bez glowy): %d\n", minWithoutHead->i);

    struct element* current = head;
    while (current != NULL) {
        struct element* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
