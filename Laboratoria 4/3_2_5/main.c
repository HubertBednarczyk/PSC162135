#include <stdio.h>
#include <stdlib.h>

int foo(const int*x, const int*y){
    return *x+*y;
}

int main()
{
    int x = 10, y = 9;
    printf("Suma dwoch wartosci: %d",foo(&x,&y));
    return 0;
}
