#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Ksiazka {
    char tytul[50];
    int liczba_stron;
} Ksiazka;

Ksiazka initKsiazka(const char* tytul, int liczba_stron) {
    struct Ksiazka ksiazka;
    strncpy(ksiazka.tytul, tytul, 50 - 1);
    ksiazka.tytul[50 - 1] = '\0';
    ksiazka.liczba_stron = liczba_stron;
    return ksiazka;
}

void pokazKsiazka(Ksiazka ksiazka) {
    printf("Tytu³: %s\n", ksiazka.tytul);
    printf("Liczba stron: %d\n", ksiazka.liczba_stron);
}

void dodajStrony(Ksiazka* ksiazka) {
    ksiazka->liczba_stron += 10;
}

int main() {
    struct Ksiazka ksiazka1 = initKsiazka("Pan Tadeusz", 300);
    pokazKsiazka(ksiazka1);
    dodajStrony(&ksiazka1);
    pokazKsiazka(ksiazka1);

    return 0;
}
