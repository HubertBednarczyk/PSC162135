#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>

void wytnijzn(char nap1[], char nap2[]){
    int znaki[256] = {0};
    int dlugosc2 = strlen(nap2);
    for (int i = 0; i < dlugosc2; i++) {
        znaki[(int)nap2[i]] = 1;
    }
    int dlugosc1 = strlen(nap1);
    int j = 0;
    for (int i = 0; i < dlugosc1; i++) {
        if (znaki[(int)nap1[i]] == 0) {
            nap1[j] = nap1[i];
            j++;
        }
    }
    nap1[j] = '\0';
}

void wytnijzn2(wchar_t nap1[], wchar_t nap2[]) {
    int znaki[65536] = {0};
    int dlugosc2 = wcslen(nap2);
    for (int i = 0; i < dlugosc2; i++) {
        znaki[(int)nap2[i]] = 1;
    }
    int dlugosc1 = wcslen(nap1);
    int j = 0;
    for (int i = 0; i < dlugosc1; i++) {
        if (znaki[(int)nap1[i]] == 0) {
            nap1[j] = nap1[i];
            j++;
        }
    }
    nap1[j] = L'\0';
}

int main()
{
    char nap1[100] = "To jest napis testowy";
    char nap2[20] = "aeiouy";
    wytnijzn(nap1, nap2);
    printf("Nowy napis: %s\n", nap1);

    wchar_t wnap1[100] = L"To jest napis testowy";
    wchar_t wnap2[20] = L"aeiouy";
    wytnijzn(nap1, nap2);
    wprintf(L"Nowy napis: %ls\n", nap1);
    return 0;
}
