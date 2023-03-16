#include <stdio.h>
#include <stdlib.h>

int foo(int n, int*w){
    *w = n;
}

int main()
{
    int x = 0;
    int *w = &x;
    int n = 10;
    foo(n,w);
    printf("%d\n",x);
    return 0;
}
