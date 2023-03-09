#include <stdio.h>
#include <stdlib.h>
//cos nie tak
int reku(int n,int m){
    if(m==0){
        return n;
    }
    if(n<m){
        return reku(m,n);
    }
    else{
        return n-m+reku(n-1,m)+reku(n,m-1);
    }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("The value of f(%d, %d) is %d\n", a, b, reku(a, b));
    return 0;
}
