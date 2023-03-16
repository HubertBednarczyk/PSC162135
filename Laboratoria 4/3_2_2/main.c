#include <stdio.h>
#include <stdlib.h>

int* foo(int*x,int*y){
    if(*x<*y){
        return x;
    }
    return y;
}

int main()
{
    int x=10, y= 11;
    printf("Adres x : %p\n",&x);
    printf("Adres y : %p\n",&y);
    printf("%p\n",foo(&x,&y));
    return 0;
}
