#include <stdio.h>
#include <stdlib.h>

int *foo(){
    double *p = (double *)malloc(sizeof(double));
    return p;
}

int main()
{
    double *p = foo();
    *p = 65.433;
    printf("%lf\n",*p);
    free(p);
    return 0;
}
