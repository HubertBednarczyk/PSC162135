#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

char* wytnij2(char nap1[], char nap2[]) {
    char* wynik = NULL;
    int nap1_len = strlen(nap1);
    int nap2_len = strlen(nap2);
    for (int i = 0; i <= nap1_len - nap2_len; i++) {
        if (strncmp(nap1 + i, nap2, nap2_len) == 0) {
            wynik = nap1 + i;
            memmove(wynik, wynik + nap2_len, strlen(wynik + nap2_len) + 1);
            break;
        }
    }
    return wynik;
}

wchar_t* wytnij22(wchar_t nap1[], wchar_t nap2[]) {
    wchar_t* wynik = NULL;
    int nap1_len = wcslen(nap1);
    int nap2_len = wcslen(nap2);
    for (int i = 0; i <= nap1_len - nap2_len; i++) {
        if (wcsncmp(nap1 + i, nap2, nap2_len) == 0) {
            wynik = nap1 + i;
            wmemmove(wynik, wynik + nap2_len, wcslen(wynik + nap2_len) + 1);
            break;
        }
    }
    return wynik;
}

int main() {
    setlocale(LC_ALL, "");

    char nap1[] = "To jest napis testowy";
    char nap2[] = "napis";
    char* wynik = wytnij2(nap1, nap2);
    if (wynik != NULL) {
        printf("Wynik: %s\n", wynik);
        //free(wynik);
    }
    else {
        printf("Nie znaleziono szukanego napisu.\n");
    }

    wchar_t wnap1[] = L"To jest napis testowy";
    wchar_t wnap2[] = L"napis";
    wchar_t* wwynik = wytnij22(wnap1, wnap2);
    if (wwynik != NULL) {
        wprintf(L"Wynik: %ls\n", wwynik);
        //free(wwynik);
    }
    else {
        wprintf(L"Nie znaleziono szukanego napisu.\n");
    }

    return 0;
}
