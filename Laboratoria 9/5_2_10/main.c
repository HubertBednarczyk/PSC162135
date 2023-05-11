#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <stdlib.h>

char* wytnij2(char nap1[], char nap2[]) {
    char* wynik = NULL;
    int nap1_len = 0;
    int nap2_len = 0;

    while (nap1[nap1_len] != '\0') {
        nap1_len++;
    }

    while (nap2[nap2_len] != '\0') {
        nap2_len++;
    }

    for (int i = 0; i <= nap1_len - nap2_len; i++) {
        int j;
        for (j = 0; j < nap2_len; j++) {
            if (nap1[i + j] != nap2[j]) {
                break;
            }
        }
        if (j == nap2_len) {
            wynik = nap1 + i;
            int k = i + nap2_len;
            while (nap1[k] != '\0') {
                nap1[k] = nap1[k + nap2_len];
                k++;
            }
            nap1[k] = '\0';
            break;
        }
    }
    return wynik;
}

wchar_t* wytnij22(wchar_t nap1[], wchar_t nap2[]) {
    wchar_t* wynik = NULL;
    int nap1_len = 0;
    int nap2_len = 0;

    while (nap1[nap1_len] != L'\0') {
        nap1_len++;
    }

    while (nap2[nap2_len] != L'\0') {
        nap2_len++;
    }

    for (int i = 0; i <= nap1_len - nap2_len; i++) {
        int j;
        for (j = 0; j < nap2_len; j++) {
            if (nap1[i + j] != nap2[j]) {
                break;
            }
        }
        if (j == nap2_len) {
            wynik = nap1 + i;
            int k = i + nap2_len;
            while (nap1[k] != L'\0') {
                nap1[k] = nap1[k + nap2_len];
                k++;
            }
            nap1[k] = L'\0';
            break;
        }
    }
    return wynik;
}

int main() {
    wchar_t wnap1[] = L"To jest napis testowy";
    wchar_t wnap2[] = L"napis";
    wchar_t* wwynik = wytnij22(wnap1, wnap2);
    if (wwynik != NULL) {
        wprintf(L"Wynik: %ls\n", wwynik);
    }
    else {
        wprintf(L"Nie znaleziono szukanego napisu.\n");
    }

    return 0;
}
