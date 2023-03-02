#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int wynik = 1;
    if(n>2){
        if(n%2==0){
            for(int i =2;i<=n;i+=2){
                wynik *=i;
            }
        }
    }
    printf("wynik: %d",wynik);
    return 0;
}
