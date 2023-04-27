#include <stdio.h>
#include <stdlib.h>

void funkcja(int **tab1, int **tab2, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void wyswietl(int n, int m, int **tab) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("[%d,%d] = %d ", i, j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main() {
    int n = 3;
    int m = 4;
    int **tab1 = malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++) {
        tab1[i] = malloc(m * sizeof(int));
        for(int j = 0; j < m; j++) {
            tab1[i][j] = (i + 1) * (j + 4);
        }
    }
    int **tab2 = malloc(n * sizeof(int *));
    for(int i = 0; i < n; i++) {
        tab2[i] = malloc(m * sizeof(int));
        for(int j = 0; j < m; j++) {
            tab2[i][j] = (i + j) % 3;
        }
    }
    printf("tablica tab1:\n");
    wyswietl(n, m, tab1);
    printf("tab2 przed zamiana:\n");
    wyswietl(n, m, tab2);
    printf("tab2 po zamianie:\n");
    funkcja(tab1, tab2, n, m);
    wyswietl(n, m, tab2);
    printf("tab1 po zmianie:\n");
    wyswietl(n, m, tab1);
    for(int i = 0; i < n; i++) {
        free(tab1[i]);
        free(tab2[i]);
    }
    free(tab1);
    free(tab2);
    return 0;
}
