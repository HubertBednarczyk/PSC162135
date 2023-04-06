#include <stdio.h>
#include <stdlib.h>

double foo(int n, const int tab[n]){
    double srednia = 0;
    for(int i =0;i<n;i++){
        srednia+=tab[i];
    }
    srednia/=n;
    return srednia;
}

void wyswietl(int n, int * tab){
    for(int i=0;i<n;i++){
        printf("[%d]=%d\n",i,*(tab+i));
    }
    printf("--\n");
}

int main()
{
    int n =5;
    int tab[] = {1,2,3,4,5};
    printf("srednia: %lf \n",foo(n,tab));
    wyswietl(n,tab);
    return 0;
}
