#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Laptop {
    char model[30];
    float cena;
} Laptop;

Laptop initLaptop(const char* model, float cena) {
    struct Laptop laptop;
    strncpy(laptop.model, model, 30 - 1);
    laptop.model[30 - 1] = '\0';
    laptop.cena = cena;
    return laptop;
}

void pokazLaptop(Laptop laptop) {
    printf("Model: %s\n", laptop.model);
    printf("Cena: %.2f\n", laptop.cena);
}

void zmniejszCene(Laptop* laptop) {
    laptop->cena *= 0.95;
}

int main() {
    struct Laptop laptop1 = initLaptop("Dell XPS 13", 3000.0);
    pokazLaptop(laptop1);
    zmniejszCene(&laptop1);
    pokazLaptop(laptop1);

    return 0;
}
