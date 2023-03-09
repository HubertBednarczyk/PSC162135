#include <stdio.h>

int reku(int n){
    if(n==0){
        return 1;
    }
    if(n>=0){
        return 2*reku(n-1)+5;
    }
}
int main() {
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);
    printf("The value of the sequence at index %d is %d\n", n, reku(n));
    return 0;
}
