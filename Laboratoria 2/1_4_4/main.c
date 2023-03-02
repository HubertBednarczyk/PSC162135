#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int silnia=1;
    if(n<0){
        printf("Blad, liczba ujemna.");
    }
    else if(n>=0){
        for(int i=n;i>0;i--){
            silnia*=i;
        }
        printf("%d! wynosi %d\n",n,silnia);
    }
    return 0;
}
