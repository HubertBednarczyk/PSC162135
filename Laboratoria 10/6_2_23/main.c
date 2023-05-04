#include <stdio.h>
#include <stdlib.h>

void zmien_kolejnosc_wierszy(int** tab, int n, int m)
{
    int i, j, temp;

    // Przestawienie wierszy
    for (i = 0; i < n/2; i++) {
        for (j = 0; j < m; j++) {
            temp = tab[i][j];
            tab[i][j] = tab[n-i-1][j];
            tab[n-i-1][j] = temp;
        }
    }
}

int main() {
    int n = 3;
    int m = 4;
    int** tablica = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        tablica[i] = malloc(m * sizeof(int));
    }

    // Wypisanie zawartości tablicy przed przestawieniem wierszy
    printf("Tablica przed przestawieniem wierszy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tablica[i][j] = i * m + j + 1;
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }

    // Przestawienie wierszy
    zmien_kolejnosc_wierszy(tablica, n, m);

    // Wypisanie zawartości tablicy po przestawieniu wierszy
    printf("Tablica po przestawieniu wierszy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }

    // Zwolnienie pamięci
    for (int i = 0; i < n; i++) {
        free(tablica[i]);
    }
    free(tablica);

    return 0;
}
