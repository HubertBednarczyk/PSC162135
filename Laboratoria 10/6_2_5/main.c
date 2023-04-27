#include <stdio.h>
#include <stdlib.h>

int ***create_3d_array(int n, int m, int k){
    int ***arr = malloc(n * sizeof(int **));
    for(int i=0;i<n;i++){
        arr[i] = malloc(m*sizeof(int *));
        for(int j=0;j<m;j++){
            arr[i][j] = malloc(k*sizeof(int));
        }
    }
    return arr;
}

void zwolnij(int ***tab, int n, int m, int k){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            free(tab[i][j]);
        }
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int n = 3;
    int m = 4;
    int k = 5;

    int ***arr = create_3d_array(n,m,k);
    printf("%p\n",arr);
    zwolnij(arr,n,m,k);
    return 0;
}
