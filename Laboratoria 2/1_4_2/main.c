#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>0 && m>0){
        for(int i=n;i<=m;i+=n){
            printf("%d,",i);
        }
    }

    return 0;
}
