#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int i;
    struct element *next;
} element;

element* find_element(element* Lista, int a) {
    while (Lista != NULL) {
        if (Lista->i == a) {
            return Lista;
            break;
        }
        Lista = Lista->next;
    }
    return NULL;
}

int main() {
    element* lista = (element*)malloc(sizeof(element));
    lista->i = 1;
    lista->next = (element*)malloc(sizeof(element));
    lista->next->i = 2;
    lista->next->next = NULL;

    int szukana_wartosc = 2;
    element* znaleziony_element = find_element(lista, szukana_wartosc);
    if (znaleziony_element != NULL) {
        printf("Znaleziono element o polu i = %d\n", znaleziony_element->i);
    } else {
        printf("Nie znaleziono elementu o polu i = %d\n", szukana_wartosc);
    }

    free(lista->next);
    free(lista);

    return 0;
}
