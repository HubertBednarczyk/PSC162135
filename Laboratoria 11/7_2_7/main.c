#include <stdio.h>
#include <stdlib.h>

struct zespolone {
    double re; // czêœæ rzeczywista
    double im; // czêœæ urojona
};

struct zespolone dodaj(struct zespolone z1, struct zespolone z2) {
    struct zespolone wynik;
    wynik.re = z1.re + z2.re;
    wynik.im = z1.im + z2.im;
    return wynik;
}

int main() {
    struct zespolone z1 = {2.5, 3.2};
    struct zespolone z2 = {1.8, -0.7};

    struct zespolone wynik = dodaj(z1, z2);

    printf("Wynik: %f + %fi\n", wynik.re, wynik.im);

    return 0;
}
