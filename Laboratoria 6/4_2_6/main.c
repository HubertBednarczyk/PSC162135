#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[n], int tab2[n]){
    for(int i =0;i<n;i++){
        tab2[i] = tab1[i];
    }
}

void foo2(int n, int tab1[n], int tab2[n]){
    for(int i =0;i<n;i++){
        tab2[n-1-i] = tab1[i];
    }
}

void wyswietl(int n, int * tab){
    for(int i=0;i<n;i++){
        printf("[%d] = %d\n",i,*(tab+i));
    }
    printf("--\n");
}

int main()
{
    int n = 5;
    int tab1[] = {4,3,2,1,5};
    int tab2[n];
    printf("Normalna tab1: \n");
    wyswietl(n,tab1);
    foo(n,tab1,tab2);
    printf("Przepisana do tab2: \n");
    wyswietl(n,tab2);
    printf("Przepisana i odwrocona do tab2: \n");
    foo2(n,tab1,tab2);
    wyswietl(n,tab2);
    return 0;
}
