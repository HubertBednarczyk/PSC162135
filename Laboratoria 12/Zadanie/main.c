#include <stdio.h>
#include <stdlib.h>

typedef struct Ksiazka {
    char tytul[50];
    int liczba_stron;
} Ksiazka;

Ksiazka* initKsiazka(const char* tytul, int liczba_stron){
    if(strlen(tytul)<5 || liczba_stron <=50){
        return NULL;
    }

    Ksiazka* ksiazka = (Ksiazka*)malloc(sizeof(Ksiazka));
    strncpy(ksiazka->tytul,tytul,50-1);
    ksiazka->tytul[50-1]='\0';
    ksiazka->liczba_stron=liczba_stron;
    return ksiazka;
}

void pokazKsiazka(Ksiazka ksiazka){
    printf("Tytul: %s\n",ksiazka.tytul);
    printf("Liczba stron: %d\n", ksiazka.liczba_stron);
}

void dodajStronyn(Ksiazka* ksiazka){
    ksiazka->liczba_stron+=10;
}

int main()
{
    struct Ksiazka* ksiazka1 = initKsiazka("Przykladowa ksiazka", 1000);
    if(ksiazka1!=NULL){
        pokazKsiazka(*ksiazka1);
        dodajStronyn(ksiazka1);
        pokazKsiazka(*ksiazka1);
        free(ksiazka1);
    }else{
        printf("Blad inicjalizacji ksiazki.\n");
    }
    return 0;
}
