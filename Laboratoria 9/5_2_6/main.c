#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>


void kopiujn(char* nap1, char* nap2, int n) {
    int len = strlen(nap1);
    if (len < n) n = len;
    strncpy(nap2, nap1, n);
    nap2[n] = '\0';
}

void kopiujn2(wchar_t* nap1, wchar_t* nap2, int n) {
    int len = wcslen(nap1);
    if (len < n) n = len;
    wcsncpy(nap2, nap1, n);
    nap2[n] = L'\0';
}

int main() {
    setlocale(LC_ALL, "");
    char nap1[] = "Hello, world!";
    char nap2[20];
    kopiujn(nap1, nap2, 6);
    printf("nap1: %s\n", nap1); // wyświetla "Hello, world!"
    printf("nap2: %s\n", nap2); // wyświetla "Hello"

    wchar_t wnap1[] = L"Witaj, świecie!";
    wchar_t wnap2[20];
    kopiujn(wnap1, wnap2, 7);
    wprintf(L"wnap1: %ls\n", wnap1); // wyświetla "Witaj, świecie!"
    wprintf(L"wnap2: %ls\n", wnap2);
    return 0;
}
