#include <stdio.h>
#include <stdlib.h>

union Liczba {
    int calkowita;
    double wymierna;
};

struct Dane {
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj_dane() {
    struct Dane dane;
    printf("Chcesz wczytac liczbe calkowita czy wymierna? (0 - calkowita, 1 - wymierna): ");
    scanf("%d", &dane.tp);
    if (dane.tp == 0) {
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &dane.zaw.calkowita);
    } else if (dane.tp == 1) {
        printf("Podaj liczbe wymierna: ");
        scanf("%lf", &dane.zaw.wymierna);
    } else {
        printf("Niepoprawny wybor typu liczby.\n");
    }
    return dane;
}

int main() {
    struct Dane dane = wczytaj_dane();
    printf("Wczytane dane:\n");
    printf("Typ liczby: %d\n", dane.tp);
    if (dane.tp == 0) {
        printf("Liczba calkowita: %d\n", dane.zaw.calkowita);
    } else {
        printf("Liczba wymierna: %lf\n", dane.zaw.wymierna);
    }
    return 0;
}
