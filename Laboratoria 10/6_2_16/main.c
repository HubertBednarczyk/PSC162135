#include <stdio.h>
#include <stdlib.h>

int index_tab(int** tab, int n, int m) {
    int max = 0;
    double max_avg = 0;
    for (int i = 0; i < n; i++) {
        double row_sum = 0;
        for (int j = 0; j < m; j++) {
            row_sum += tab[i][j];
        }
        double row_avg = row_sum / m;
        if (row_avg > max_avg) {
            max_avg = row_avg;
            max = i;
        }
    }
    return max;
}

int main() {
    int n = 3;
    int m = 4;
    int** arr = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            arr[i][j] = (i + 1) * 10 + j + 1;
        }
    }
    int max_row = index_tab(arr, n, m);
    printf("Indeks wiersza o najwiekszej sredniej wartosci elementow: %d\n", max_row);
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
