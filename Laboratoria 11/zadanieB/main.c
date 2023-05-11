#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Samochod {
    char marka[20];
    int przebieg;
} Samochod;

Samochod initSamochod(const char* marka, int przebieg) {
    struct Samochod samochod;
    strncpy(samochod.marka, marka, 20 - 1);
    samochod.marka[20 - 1] = '\0';
    samochod.przebieg = przebieg;
    return samochod;
}

void pokazSamochod(Samochod samochod) {
    printf("Marka: %s\n", samochod.marka);
    printf("Przebieg: %d\n", samochod.przebieg);
}

void przebiegService(Samochod* samochod) {
    samochod->przebieg += 10000;
}

int main() {
    struct Samochod samochod1 = initSamochod("Toyota", 50000);
    pokazSamochod(samochod1);
    przebiegService(&samochod1);
    pokazSamochod(samochod1);

    return 0;
}
