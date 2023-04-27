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
    int **tab2 = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab1[i] = malloc(m * sizeof(int));
        tab2[i] = malloc(m * sizeof(int));
    }
    tab1[0][0] = 4;
    tab1[0][1] = 5;
    tab1[0][2] = 6;
    tab1[0][3] = 7;
    tab1[1][0] = 8;
    tab1[1][1] = 9;
    tab1[1][2] = 10;
    tab1[1][3] = 11;
    tab1[2][0] = 12;
    tab1[2][1] = 13;
    tab1[2][2] = 14;
    tab1[2][3] = 15;
    tab2[0][0] = 0;
    tab2[0][1] = 0;
    tab2[0][2] = 0;
    tab2[0][3] = 0;
    tab2[1][0] = 8;
    tab2[1][1] = 9;
    tab2[1][2] = 10;
    tab2[1][3] = 11;
    tab2[2][0] = 9;
    tab2[2][1] = 9;
    tab2[2][2] = 9;
    tab2[2][3] = 9;
    printf("tablica tab1: \n");
    wyswietl(n, m, tab1);
    printf("tab2 przed zamiana: \n");
    wyswietl(n, m, tab2);
    printf("tab 2 po zamianie: \n");
    funkcja(tab1, tab2, n, m);
    wyswietl(n, m, tab2);
    printf("tab 1 po zmianie: \n");
    wyswietl(n, m, tab1);

    for (int i = 0; i < n; i++) {
        free(tab1[i]);
        free(tab2[i]);
    }
    free(tab1);
    free(tab2);

    return 0;
}
