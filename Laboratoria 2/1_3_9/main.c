#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Oto program kalkulator\n");
    printf("Wybierz jaka operacje chcesz wykonac\n");
    printf("Dodawanie[+], Odejmowanie[-],Mnozenie[*],Dzielenie[/]\n");
    scanf("%c",&a);
    double b,c,wynik;
    switch(a){
        case '+':
            printf("Wybrales dodawanie.\n");
            printf("Podaj dwie liczby ktore chcesz dodac\n");
            scanf("%lf %lf",&b,&c);
            wynik = b+c;
            printf("Wynik: %lf",wynik);
            break;
        case '-':
            printf("Wybrales odejmowanie.\n");
            printf("Podaj dwie liczby ktore chcesz odjac\n");
            scanf("%lf %lf",&b,&c);
            wynik = b-c;
            printf("Wynik: %lf",wynik);
            break;
        case '*':
            printf("Wybrales mnozenie.\n");
            printf("Podaj dwie liczby ktore chcesz pomnozyc\n");
            scanf("%lf %lf",&b,&c);
            wynik = b*c;
            printf("Wynik: %lf",wynik);
            break;
        case '/':
            printf("Wybrales dzielenie.\n");
            printf("Podaj dwie liczby ktore chcesz podzielic\n");
            scanf("%lf %lf",&b,&c);
            if(c==0 || b==0){
                printf("Pamietaj cholero, nie dziel przez zero.\n");
                return 1;
            }
            wynik = b/c;
            printf("Wynik: %lf",wynik);
            break;
        default:
            printf("Niepoprawny znak\n");
            return 1;
    }
    return 0;
}
