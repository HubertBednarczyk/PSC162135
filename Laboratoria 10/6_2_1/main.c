#include <stdio.h>
#include <stdlib.h>

int **create_2d_array(int n, int m){
    int **arr = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i] = malloc(m*sizeof(int));
    }
    return arr;
}

void zwolnij(int ** tab, int n, int m){
    for(int i=0;i<n;i++){
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int n = 3;
    int m = 4;

    int **arr = create_2d_array(n,m);
    printf("%p\n",arr);
    zwolnij(arr,n,m);
    return 0;
}
