#include <stdio.h>
#include <stdlib.h>

char* sklej(char* napis1, char* napis2, char* napis3) {
    int dlugosc1 = strlen(napis1);
    int dlugosc2 = strlen(napis2);
    int dlugosc3 = strlen(napis3);
    char* wynik = (char*)malloc((dlugosc1+dlugosc2+dlugosc3+1) * sizeof(char));
    if (wynik == NULL) {
        printf("Blad alokacji pamieci!\n");
        exit(1);
    }
    strcpy(wynik, napis1);
    strcat(wynik, napis2);
    strcat(wynik, napis3);
    return wynik;
}

wchar_t* sklej2(wchar_t* napis1, wchar_t* napis2, wchar_t* napis3) {
    int dlugosc1 = wcslen(napis1);
    int dlugosc2 = wcslen(napis2);
    int dlugosc3 = wcslen(napis3);
    wchar_t* wynik = (wchar_t*)malloc((dlugosc1+dlugosc2+dlugosc3+1) * sizeof(wchar_t));
    if (wynik == NULL) {
        wprintf(L"Blad alokacji pamieci!\n");
        exit(1);
    }
    wcscpy(wynik, napis1);
    wcscat(wynik, napis2);
    wcscat(wynik, napis3);
    return wynik;
}

int main()
{
    char napis1[] = "Ala ma ";
    char napis2[] = "kota ";
    char napis3[] = "i psa.";
    char* wynik = sklej(napis1, napis2, napis3);
    printf("%s\n", wynik);
    free(wynik);

    wchar_t napis11[] = L"Ala ma ";
    wchar_t napis22[] = L"kota ";
    wchar_t napis33[] = L"i psa";
    wchar_t* wwynik = sklej2(napis11, napis22, napis33);
    wprintf(L"%ls", wwynik);
    free(wwynik);
    return 0;
}
