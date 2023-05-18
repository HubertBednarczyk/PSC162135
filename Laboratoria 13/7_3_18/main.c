#include <stdio.h>
#include <stdlib.h>

typedef struct Element {
    int value;
    struct Element* next;
} Element;

void usunw(Element** Lista, Element* elem) {
    if (*Lista == NULL || elem == NULL) {
        return;
    }

    if (*Lista == elem) {
        *Lista = elem->next;
        free(elem);
        return;
    }

    Element* current = *Lista;
    while (current != NULL && current->next != elem) {
        current = current->next;
    }
    if (current == NULL) {
        return;
    }

    current->next = elem->next;
    free(elem);
}



void zwolnij_liste(Element* Lista) {
    Element* obecny = Lista;
    while (obecny != NULL) {
        Element* nastepny = obecny->next;
        free(obecny);
        obecny = nastepny;
    }
}

int main() {
    Element* element1 = (Element*)malloc(sizeof(Element));
    element1->value = 1;
    element1->next = NULL;

    Element* element2 = (Element*)malloc(sizeof(Element));
    element2->value = 2;
    element2->next = NULL;

    Element* element3 = (Element*)malloc(sizeof(Element));
    element3->value = 3;
    element3->next = NULL;

    element1->next = element2;
    element2->next = element3;

    Element* obecny = element1;
    while (obecny != NULL) {
        printf("%d ", obecny->value);
        obecny = obecny->next;
    }
    printf("\n");

    usunw(&element1, element2);

    obecny = element1;
    while (obecny != NULL) {
        printf("%d ", obecny->value);
        obecny = obecny->next;
    }
    printf("\n");

    zwolnij_liste(element1);

    return 0;
}
