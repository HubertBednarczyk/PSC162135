#include <stdio.h>
#include <stdlib.h>

int reku(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        if(n%2==0){
            return reku(n-1)+n;
        }
        else{
            return reku(n-1)*n;
        }
    }
}

int main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d",&n);
    if(n>=0){
        printf("Wynik rekurencji: %d\n",reku(n));
    }
    return 0;
}
