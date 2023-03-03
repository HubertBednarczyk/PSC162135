#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,lustro=0;
    printf("Podaj liczbe a:\n");
    scanf("%d",&a);
    printf("Podaj liczbe b:\n");
    scanf("%d",&b);
    while (a>0) {
        lustro=lustro*10+a%10;
        a/=10;
    }
    if (lustro==b) {
        printf("Lustrzane odbicie\n");
    } else {
        printf("to nie jest lustrzane odbicie\n");
    }
    return 0;
}
