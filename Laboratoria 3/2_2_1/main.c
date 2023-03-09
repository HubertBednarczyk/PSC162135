#include <stdio.h>
#include <stdlib.h>

int foo(int x){
    if(x>=0){
        return x;
    }
    return x*-1;
}

int main()
{
    int n;
    printf("Podaj liczbe: \n");
    scanf("%d",&n);
    printf("Z liczby %d wartosc bezw wynosi: %d\n",n,foo(n));
    return 0;
}
