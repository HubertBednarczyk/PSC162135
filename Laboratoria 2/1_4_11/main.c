#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //a
    int i =0;
    while(abs(a)*i*i+b*i+c<d){
        i++;
    }
    printf("%d\n",i);

    for(int q =0;abs(a)*q*q+b*q+c<d;q++)
    printf("%d\n",q);
    //b
    int j = 0;
    while(5*j*j+a*j+b<c){
        j++;
    }
    printf("%d\n",j);
    //c
    int k = 0;
    while(5*k*k+a*k+b<=c){
        k++;
    }
    printf("%d\n",k);
    return 0;
}
