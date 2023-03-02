#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Chcesz obliczyc pole trojkata dwoma sposobami:\n");
    printf("Wzorem na wysokosc - [1], bokami trojkata - [2]\n");
    int podstawa,bok1,bok2,wysokosc;
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("Wybrales opcje pole wzorem na wysokosc\n");
            printf("Podaj podstawe trojkata i wysokosc: \n");
            scanf("%d %d",&podstawa, &wysokosc);
            printf("Podstawa: %d, wysokosc: %d", podstawa, wysokosc);
            printf("\nPole: %d",(podstawa*wysokosc)/2);
        case 2:
            printf("Wybrales opcje pole wzorem uwzgledniajac boki trojkata\n");
            printf("Podaj podstawe oraz jeden i drugi bok trojkata: \n");
            scanf("%d %d %d",&podstawa,&bok1,&bok2);
            printf("Podstawa: %d, Bok pierwszy: %d, Bok drugi: %d",podstawa,bok1,bok2);
            int p = (podstawa+bok1+bok2)/2;
            printf("\nPole: %d",sqrt(p*(p-podstawa)*(p-bok1)*(p-bok2)));
    }
    return 0;
}
