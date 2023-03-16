#include <stdio.h>
#include <stdlib.h>

void foo(const int* wsk1, int* const wsk2){
    *wsk2 = *wsk1;
}

int main()
{
    int zmienna = 0;
    const int stala =12;
    printf("Przed przepisaniem: zmienna = %d\n", zmienna);
    foo(&stala, &zmienna);
    printf("Po przepisaniu: zmienna = %d\n", zmienna);
    return 0;
}
