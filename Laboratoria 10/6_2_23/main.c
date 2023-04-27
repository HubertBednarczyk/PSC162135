#include <stdio.h>
#include <stdlib.h>

void zmien_kolejnosc_wierszy(int **tab, int n, int m) {
    int *temp = malloc(m * sizeof(int));  // tymczasowa tablica na przechowywanie wiersza

    // przechodzimy po wierszach od pierwszego do przedostatniego
    for (int i = 0; i < n - 1; i++) {
        // zapisujemy wiersz i+1 do tablicy tymczasowej
        for (int j = 0; j < m; j++) {
            temp[j] = tab[i+1][j];
        }

        // przepisujemy wiersz i do wiersza i+1
        for (int j = 0; j < m; j++) {
            tab[i+1][j] = tab[i][j];
        }

        // przepisujemy wiersz tymczasowy do wiersza i
        for (int j = 0; j < m; j++) {
            tab[i][j] = temp[j];
        }
    }

    free(temp);  // zwalniamy pamiêæ zaalokowan¹ na tablicê tymczasow¹
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
