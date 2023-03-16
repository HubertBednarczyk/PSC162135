#include <stdio.h>
#include <stdlib.h>

void foo(int*x,int*y){
    int temp = *x;
    if(*y<*x){
        *x = *y;
        *y = temp;
    }
}

int main()
{
    int x = 10, y = 5;
    int *a = &x, *b = &y;
    printf("Przypadek gdy y jest mniejsze:\n");
    printf("Przed zamiana x: %d, y: %d\n",x,y);
    foo(a,b);
    printf("Po zamianie x: %d, y: %d\n",x,y);
    return 0;
}
