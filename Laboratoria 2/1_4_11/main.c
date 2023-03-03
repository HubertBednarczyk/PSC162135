#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int i =0;
    while(abs(a)*i*i+b*i+c<d){
        i++;
    }
    printf("%d\n",i);
    int j = 0;
    while(5*j*j+a*j+b<c){
        j++;
    }
    printf("%d\n",j);
    int k = 0;
    while(5*k*k+a*k+b<=c){
        k++;
    }
    printf("%d\n",k);
    return 0;
}
