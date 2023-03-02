#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
    if(a>0 || a<0){
        int delta = b*b-4*a*c;
        if(delta > 0){
            printf("Delta wieksza od zera");
            int x1 = (-b-sqrt(delta))/2*a;
            int x2 = (-b+sqrt(delta))/2*a;
            printf("\nX1: %d, X2: %d",x1,x2);
        }
        else if(delta == 0){
            printf("Delta rowna zero");
            int x0 = (-b/2*a);
            printf("\nX0: %d",x0);
        }
        else{
            printf("Brak rozwiazan.");
        }
    }
    else if(a==0){
        printf("Rzadko spotykane.");
    }
    return 0;
}
