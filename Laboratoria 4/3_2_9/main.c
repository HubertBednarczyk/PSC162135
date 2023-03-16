#include <stdio.h>
#include <stdlib.h>

int* foo(){
    int *p = (int *)malloc(sizeof(int));
    return p;
}

int main()
{
    int *p = foo();
    *p = 111;
    printf("%d\n",*p);
    free(p);
    return 0;
}
