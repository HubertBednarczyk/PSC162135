#include <stdio.h>
#include <stdlib.h>

void zwolnijpamiec(double *tab){
    free(tab);
}



int main()
{
    int n = 5;
    double *tab = (double*)malloc(n*sizeof(double));

    for(int i=0;i<n;i++){
        tab[i] = i*1,5;
        printf("%.2lf",tab[i]);
    }

    zwolnijpamiec(tab);
    return 0;
}
