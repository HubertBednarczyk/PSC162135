#include <stdio.h>
#include <stdlib.h>

void funkcja(int tab1[][4], int tab2[][4], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void wyswietl(int n, int m, int tab[][m]){
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            printf("[%d,%d] = %d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int n = 3;
    int m = 4;
    int tab1[][4] = {{4,5,6,7},{8,9,10,11},{12,13,14,15}};
    int tab2[3][4];
    printf("tablica tab1: \n");
    wyswietl(n,m,tab1);
    printf("tab2 przed zamiana: \n");
    wyswietl(n,m,tab2);
    printf("tab 2 po zamianie: \n");
    funkcja(tab1,tab2,n,m);
    wyswietl(n,m,tab2);

    return 0;
}
