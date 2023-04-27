#include <stdio.h>
#include <stdlib.h>

int sum_2d_array(int **arr, int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

void wyswietl(int n, int m, int **tab){
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            printf("[%d,%d] = %d ",i,j,tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main() {
    int n = 3;
    int m = 4;
    int **tab1 = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab1[i] = malloc(m * sizeof(int));
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

    printf("suma el. : %d\n",sum_2d_array(tab1,n,m));
    return 0;
}
