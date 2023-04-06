#include <stdio.h>
#include <stdlib.h>
void odwroc(int* tab, int n) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}

void o_jedne_w_lewo(int* tab, int n) {
    int temp = tab[0];
    for (int i = 1; i < n; i++) {
        tab[i - 1] = tab[i];
    }
    tab[n - 1] = temp;
}

void o_jedne_w_prawo(int* tab, int n) {
    int temp = tab[n - 1];
    for (int i = n - 1; i > 0; i--) {
        tab[i] = tab[i - 1];
    }
    tab[0] = temp;
}

void sortuj_rosnaco(int* tab, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tab[i] > tab[j]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void sortuj_malejaco(int* tab, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tab[i] < tab[j]) {
                temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

void wyswietl(int n, int * tab){
    for(int i=0;i<n;i++){
        printf("[%d] = %d\n",i,*(tab+i));
    }
    printf("--\n");
}


int main() {
    int tab[] = {5, 8, 2, 7, 1, 6, 3, 9, 4};
    int n = sizeof(tab) / sizeof(tab[0]);

    printf("Aktualna tablica:\n");
    wyswietl(n,tab);

    odwroc(tab, n);
    printf("Tablica po odwroceniu\n");
    wyswietl(n,tab);

    o_jedne_w_lewo(tab, n);
    printf("Po przesunieciu w lewo\n");
    wyswietl(n,tab);

    o_jedne_w_prawo(tab, n);
    printf("Po przesunieciu w prawo:");
    wyswietl(n,tab);

    sortuj_rosnaco(tab, n);
    printf("Po posortowaniu rosnaco:");
    wyswietl(n,tab);

    sortuj_malejaco(tab, n);
    printf("Po posortowaniu malejaco:");
    wyswietl(n,tab);

    return 0;
}
