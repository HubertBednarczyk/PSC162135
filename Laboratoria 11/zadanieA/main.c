#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Osoba {
    char imie[20];
    int wiek;
} Osoba;

Osoba initOsoba(const char* imie, int wiek) {
    struct Osoba osoba;
    strncpy(osoba.imie, imie, 20 - 1);
    osoba.imie[20 - 1] = '\0';
    osoba.wiek = wiek;
    return osoba;
}

void pokazOsoba(Osoba osoba) {
    printf("Imie: %s\n", osoba.imie);
    printf("Wiek: %d\n", osoba.wiek);
}

void urodziny(Osoba* osoba) {
    osoba->wiek ++;
}

int main() {
    struct Osoba osoba1 = initOsoba("Jan", 30);
    pokazOsoba(osoba1);
    urodziny(&osoba1);
    pokazOsoba(osoba1);

    return 0;
}
