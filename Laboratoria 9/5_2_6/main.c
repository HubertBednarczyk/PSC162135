#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>


void kopiujn(char* nap1, char* nap2, int n) {
    int i = 0;
    while (i < n && nap1[i] != '\0') {
        nap2[i] = nap1[i];
        i++;
    }
    nap2[i] = '\0';
}

void kopiujn2(wchar_t* nap1, wchar_t* nap2, int n) {
    int i = 0;
    while (i < n && nap1[i] != L'\0') {
        nap2[i] = nap1[i];
        i++;
    }
    nap2[i] = L'\0';
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
    kopiujn2(wnap1, wnap2, 7);
    wprintf(L"wnap1: %ls\n", wnap1); // wyświetla "Witaj, świecie!"
    wprintf(L"wnap2: %ls\n", wnap2);
    return 0;
}
