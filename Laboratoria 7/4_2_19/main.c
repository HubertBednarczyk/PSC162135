#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int* copy_nonzero_elements(int n, int tab1[]) {
    int nonzeros = 0;
    for (int i = 0; i < n; i++) {
        if (tab1[i] != 0) {
            nonzeros++;
        }
    }
    int* tab2 = malloc(nonzeros * sizeof(int));
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

    int* tab2 = copy_nonzero_elements(n, tab1);

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

