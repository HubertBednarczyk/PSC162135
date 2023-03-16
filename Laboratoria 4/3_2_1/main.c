#include <stdio.h>
#include <stdlib.h>

//wsk - adres
//*wsk - wartosc, ktora stoi na danym adresie
//&wsk - adres, w ktroym przechowywany jest adres


int foo(int*x, int*y){
    if(*x < *y){
        return *x;
    }
    return *y;
}

int main()
{
    int x = 10, y = 5;
    int *a = &x, *b=&y;
    int m = foo(a,b);
    printf("%d\n",m);
    return 0;
}
