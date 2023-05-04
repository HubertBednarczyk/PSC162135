#include <stdio.h>
#include <stdlib.h>
#define MAX_WYMIAR 100

struct punktn {
    int n;
    double wymiary[MAX_WYMIAR];
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tab2[i].n = tab1[i].n;
        for (int j = 0; j < tab1[i].n; j++) {
            tab2[i].wymiary[j] = tab1[i].wymiary[j];
        }
    }
}

int main() {
    struct punktn tab1[3] = {
        {3, {1, 2, 3}},
        {2, {4, 5}},
        {4, {6, 7, 8, 9}}
    };

    struct punktn tab2[3];

    przepisz(tab1, tab2, 3);

    for (int i = 0; i < 3; i++) {
        printf("Tab2[%d]: n = %d, wymiary = {", i, tab2[i].n);
        for (int j = 0; j < tab2[i].n; j++) {
            printf("%f", tab2[i].wymiary[j]);
            if (j != tab2[i].n - 1) {
                printf(", ");
            }
        }
        printf("}\n");
    }

    return 0;
}
