#include <stdio.h>
#include <stdlib.h>

typedef struct element{
    int i;
    struct element* next;
} element;

struct element* dodajw(element* Lista, element* elem, int a){
    element* nowy = (element*)malloc(sizeof(element));
    if(nowy == NULL){
        printf("blad alokacji pamieci");
        return Lista;
    }

    nowy->i = a;

    if(elem == NULL){
        nowy->next = Lista;
        return nowy;
    }else{
        nowy->next = elem->next;
        elem->next = nowy;
        return Lista;
    }

}

int main()
{
    element* lista = NULL;

    lista = dodajw(lista,NULL,3);
    lista = dodajw(lista,NULL,2);

    element* elem = lista;
    while(elem->next != NULL){
        elem = elem->next;
    }
    lista = dodajw(lista,elem,4);

    printf("Zawartosc listy: \n");
    elem = lista;
    while(elem!=NULL){
        printf("%d ", elem->i);
        elem = elem->next;
    }
    printf("\n");
    return 0;
}


