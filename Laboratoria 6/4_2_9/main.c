#include <stdio.h>
#include <stdlib.h>

void zamien_tablice(int n, int *tab1, int *tab2, int *tab3){
    for(int i =0;i<n;i++){
        int a = *tab1;
        int b = *tab2;
        int c = *tab3;

        int max = a;
        if(b>max)
            max = b;
        if(c>max)
            max = c;
        *tab1=max;

        int min = a;
        if(b<min)
            min=b;
        if(c<min)
            min=c;
        *tab3 = min;

        *tab2 = a+b+c-max-min;

        tab1++;
        tab2++;
        tab3++;
    }
}

void wyswietl(int n, int * tab){
    for(int i=0;i<n;i++){
        printf("[%d] = %d\n",i,*(tab+i));
    }
    printf("--\n");
}

int main()
{
    int n =5;
    int tab1[]={3,8,5,1,9};
    int tab2[]={2,7,6,4,0};
    int tab3[]={4,1,9,6,2};

    printf("Przed: \n");
    wyswietl(n,tab1);
    wyswietl(n,tab2);
    wyswietl(n,tab3);

    zamien_tablice(n,tab1,tab2,tab3);
    printf("Po zamianie: \n");
    wyswietl(n,tab1);
    wyswietl(n,tab2);
    wyswietl(n,tab3);


    return 0;
}
