#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int value;
    struct element* next;
} element;

element* doklej(element* Lista1, element* Lista2) {
    if (Lista1 == NULL) {
        return Lista2;
    }

    element* current = Lista1;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = Lista2;

    return Lista1;
}

int main() {
    element* Lista1 = malloc(sizeof(element));
    Lista1->value = 1;
    Lista1->next = malloc(sizeof(element));
    Lista1->next->value = 2;
    Lista1->next->next = malloc(sizeof(element));
    Lista1->next->next->value = 3;
    Lista1->next->next->next = NULL;

    element* Lista2 = malloc(sizeof(element));
    Lista2->value = 4;
    Lista2->next = malloc(sizeof(element));
    Lista2->next->value = 5;
    Lista2->next->next = NULL;

    element* wynik = doklej(Lista1, Lista2);

    printf("Polaczona lista: ");
    element* current = wynik;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");

    current = wynik;
    while (current != NULL) {
        element* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
