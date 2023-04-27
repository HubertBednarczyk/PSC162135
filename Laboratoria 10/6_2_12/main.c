#include <stdio.h>
#include <stdlib.h>

int sum_2d_array(int arr[][100], int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
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

int main() {
    int arr[3][100] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3;
    int m = 4;
    int sum = sum_2d_array(arr, n, m);
    printf("Suma: %d\n", sum);
    return 0;
}
