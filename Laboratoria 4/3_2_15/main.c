#include <stdio.h>
#include <stdlib.h>

void foo(const int*x, int*y){
    *y = *x;
}

int main()
{
    int zmienna = 0;
    const int stala =42;
    printf("Wartosc zmiennej przed zmiana: %d\n",zmienna);
    foo(&stala,&zmienna);
    printf("Wartosc stalej: %d\n",stala);
    printf("Wartosc zmiennej po zmianie: %d\n",zmienna);
    return 0;
}
