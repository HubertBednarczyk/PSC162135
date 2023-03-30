#include <stdio.h>
#include <stdlib.h>

double srednia(int n, int tab[n]){
    int srednia = 0;
    int suma = 0;
    if(n>0){
        for(int i =0;i<n;i++){
            srednia += tab[i];
        }
        srednia /=n;
        return srednia;
    }
}

int suma(int n, int tab[n]){
    int suma=0;
    for(int i=0;i<n;i++){
        suma+=tab[i];
    }
    return suma;
}

int sumakwadrat(int n, int tab[n]){
    int sumakwad = 0;
    for(int i=0;i<n;i++){
        sumakwad = tab[i]*tab[i];
    }
    return sumakwad;
}

int main()
{
    //a)
    int n=5;
    int tab[]={1,2,3,4,5};
    printf("Srednia elementow tablicy: %lf\n",srednia(n,tab));



    //b)
    printf("Suma elementow tablicy: %d\n",suma(n,tab));

    //c)
    printf("Suma kwadratow elementow tablicy: %d\n",sumakwadrat(n,tab));
    return 0;
}
