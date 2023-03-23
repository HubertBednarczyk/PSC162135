#include <stdio.h>
#include <stdlib.h>

int foo(int const *wsk1, const int *wsk2){
    return *wsk1-*wsk2;
}

int main()
{
    int a = 5;
    const int b = 3;

    int *wsk1 = &a;
    const int *wsk2 = &b;

    int result = foo(wsk2, wsk1);
    printf("%d - %d = %d\n", *wsk1, *wsk2, result);
    return 0;
}
