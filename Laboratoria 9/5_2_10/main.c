#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

char* wytnij2(char nap1[], char nap2[]){
    char * wynik = strstr(nap1,nap2);
    if(wynik){
        memmove(wynik, wynik+strlen(nap2),strlen(wynik+strlen(nap2))+1);
    }
    return wynik;
}

wchar_t wytnij22(wchar_t nap1[], wchar_t nap2[]){
    wchar_t * wynik = wcsstr(nap1,nap2);
    if(wynik){
        wmemmove(wynik, wynik+wcslen(nap2),wcslen(wynik + wcslen(nap2))+1);
    }
}

int main()
{
    setlocale(LC_ALL, "");

    char nap1[] = "To jest napis testowy";
    char nap2[] = "napis";
    char* wynik = wytnij2(nap1, nap2);
    if (wynik != NULL) {
    printf("Wynik: %s\n", wynik);
    } else {
    printf("Nie znaleziono szukanego napisu.\n");
    }

    wchar_t wnap1[] = L"To jest napis testowy";
    wchar_t wnap2[] = L"napis";
    wchar_t* wwynik = wytnij22(nap1, nap2);
    if (wynik != NULL) {
    wprintf(L"Wynik: %ls\n", wynik);
    } else {
    wprintf(L"Nie znaleziono szukanego napisu.\n");
    }
    return 0;
}
