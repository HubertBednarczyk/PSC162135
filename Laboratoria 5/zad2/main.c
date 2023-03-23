#include <stdio.h>
#include <stdlib.h>

int foo(int(*wsk1)(int),int(*wsk2)(int), int n){
    return wsk1(n) + wsk2(n);
}

int kwadrat(int x){
    return x*x;
}

int foo2(int x){
    return x;
}

int main()
{
    int n =5;
    int zm = foo(kwadrat,foo2,n);
    printf("kwadrat(%d) + foo2(%d) = %d\n",n,n,zm);
    int zm2 = foo(foo2,foo2,n);
    printf("foo2(%d) + foo2(%d) = %d\n",n,n,zm2);
    return 0;
}
