#include <stdio.h>
#include <stdlib.h>
//dla przecwiczenia rekurencji

int reku(int n){
    if(n>=0){
        if(n==0 || n== 1){
            return 1;
        }
        else{
            return reku(n-1)+2*reku(n-2)+3;
        }
    }
}

int main()
{
    int n;
    printf("Enter positive number: \n");
    scanf("%d",&n);
    if(n>=0){
        printf("Wynik rekurencji: %d\n",reku(n));
    }
    else{
        printf("Liczba ujemna. Niezgodna z zadaniem.");
    }
    return 0;
}
