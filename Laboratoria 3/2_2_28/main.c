#include <stdio.h>
#include <stdlib.h>

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

int main(){
    printf("%d\n",reku(0,0));
    printf("%d\n",reku(5,0));
    printf("%d\n",reku(0,5));
    printf("%d\n",reku(2,2));
    printf("%d\n",reku(3,3));
    printf("%d\n",reku(7,4));
    printf("%d\n",reku(12,8));
    return 0;
}
