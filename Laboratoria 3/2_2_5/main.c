#include <stdio.h>
#include <stdlib.h>

double foo(int n){
    float wynik=1;
    if(n>0){
        for(int i =1;i<=n;i++){
            wynik *=2;
        }
    }
    else if(n<0){
        for(int i =-1;i>=n;i--){
            wynik /=2;
        }
    }
    return wynik;
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);
    printf("Wynik dzialania 2^n: %f",foo(n));
    return 0;
}
