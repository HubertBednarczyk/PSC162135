#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool foo(int (*wsk1)(int), int (*wsk2)(int), unsigned int n){
    for(unsigned int i =0;i<=n;i++){
        if(wsk1(i) != wsk2(i)){
            return false;
        }
    }
    return true;
}

bool foo1(int x){
    return x%2==0;
}

bool foo2(int x){
    return x >= 0;
}

int main()
{
    unsigned int n = 10;
    if(foo(foo1,foo2,n)){
        printf("takie same od 0 do %d\n",n);
    }else{
        printf("nie takie same od 0 do %d\n",n);
    }
    return 0;
}
