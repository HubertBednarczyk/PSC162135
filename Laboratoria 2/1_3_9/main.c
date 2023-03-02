#include <stdio.h>
#include <stdlib.h>
//Nie do konca tak chcialbym zeby to wygladalo
int main()
{
    int a;
    printf("Oto program kalkulator\n");
    printf("Wybierz jaka operacje chcesz wykonac\n");
    printf("Dodawanie-[1], Odejmowanie-[2],Mnozenie-[3],Dzielenie-[4]\n");
    scanf("%d",&a);
    int b,c;
    switch(a){
        case 1:
            printf("Wybrales dodawanie.\n");
            printf("Podaj dwie liczby ktore chcesz dodac\n");
            scanf("%d %d",&b,&c);
            printf("Wynik: %d",b+c);
        case 2:
            printf("Wybrales odejmowanie.\n");
            printf("Podaj dwie liczby ktore chcesz odjac\n");
            scanf("%d %d",&b,&c);
            printf("Wynik: %d",b-c);
        case 3:
            printf("Wybrales mnozenie.\n");
            printf("Podaj dwie liczby ktore chcesz pomnozyc\n");
            scanf("%d %d",&b,&c);
            printf("Wynik: %d",b*c);
        case 4:
            printf("Wybrales dzielenie.\n");
            printf("Podaj dwie liczby ktore chcesz podzielic\n");
            scanf("%d %d",&b,&c);
            printf("Wynik: %d",b/c);
    }
    return 0;
}
