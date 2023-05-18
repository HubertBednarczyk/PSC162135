#include <stdio.h>
#include <stdlib.h>

typedef struct Element{
    int i;
    struct Element* next;
}Element;

void dodajw(Element* Lista, Element* elem, int a){
    Element* nowy_element = (Element*)malloc(sizeof(Element));
    nowy_element->value=a;
    nowy_element->next = elem->next;
    elem->next = nowy_element;
}

void wyczysc(Element* lista){
    Element* obecny = Lista;
    while(obecny != NULL){
        Element* nastepny = obecny->next;
        free(obecny);
        obecny=nastepny;
    }
}

int main()
{
    Element* element1 = (Element*)malloc(sizeof(Element));
    element1->value = 1;
    element1->next = NULL;

    Element* element2 = (Element*)malloc(sizeof(Element));
    element2->value = 2;
    element2->next = NULL;

    Element* element3 = (Element*)malloc(sizeof(Element));
    element3->value = 3;
    element3->next = NULL;

    dodajw(element1,element2,4);

    Element* obecny = element1;
    while(obecny != NULL){
        printf("%d ", obecny->value);
        obecny=obecny->next;
    }
    printf("\n");

    wyczysc(element1);
    return 0;
}
