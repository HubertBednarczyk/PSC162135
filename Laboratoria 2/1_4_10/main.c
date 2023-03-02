#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0){
        int i =0;
        while(i*i<=n){
            i++;
        }
        printf("%d",i-1);
    }
    return 0;
}
