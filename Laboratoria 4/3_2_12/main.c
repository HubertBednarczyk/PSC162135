#include <stdio.h>
#include <stdlib.h>

double* foo(int n){
    double *p = malloc(n * sizeof(double));
    return p;
}

int main()
{
    int n = 5;
    double *p = foo(n);
    for(int i =0;i<n;i++){
        p[i] = i*i;
    }
    for(int i=0;i<n;i++){
        printf("%.1f ",p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}
