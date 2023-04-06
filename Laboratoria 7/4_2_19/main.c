#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int* kopia_niezerowe(int n, int tab1[]) {
    int rozne_od_zera = 0;
    for (int i = 0; i < n; i++) {
        if (tab1[i] != 0) {
            rozne_od_zera++;
        }
    }
    int* tab2 = malloc(rozne_od_zera * sizeof(int));
    if (tab2 == NULL) {
        printf("Nie uda³o siê zaalokowaæ pamiêci dla tablicy tab2\n");
        exit(1);
    }
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (tab1[i] != 0) {
            tab2[j] = tab1[i];
            j++;
        }
    }
    return tab2;
}

int main() {
    int tab1[] = {1, 0, 2, 0, 3};
    int n = sizeof(tab1) / sizeof(tab1[0]);

    int* tab2 = kopia_niezerowe(n, tab1);

    printf("tab1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab1[i]);
    }
    printf("\n");

    printf("tab2: ");
    for (int i = 0; i < n-2; i++) {
        printf("%d ", tab2[i]);
    }
    printf("\n");

    free(tab2);
    return 0;
}

