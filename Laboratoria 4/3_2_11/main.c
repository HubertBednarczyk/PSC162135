#include <stdio.h>
#include <stdlib.h>

int* foo(int n){
    int *p = (int *)malloc(n * sizeof(int));
    return p;
}

int main()
{
    int n = 5;
    int *p = foo(n);
    for(int i =0;i<n;i++){
        p[i] = i*i;
    }
    for(int i=0;i<n;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    free(p);
    return 0;
}
