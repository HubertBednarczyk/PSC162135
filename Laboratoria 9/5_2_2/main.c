#include <stdio.h>
#include <stdlib.h>

// Dla char:
int dlugosc(const char *napis){
    int i = 0;
    while(napis[i] != '\0'){
        i++;
    }
    return i;
}

// Dla wchar_t:
int dlugosc2(const wchar_t *napis){
    int i = 0;
    while(napis[i] != L'\0'){
        i++;
    }
    return i;
}

int main()
{
    const char *napis = "Hello, world!";
    const wchar_t *napis_w = L"Swiecie, witaj!";
    printf("Napis: %s\nDlugosc: %d\n",napis,dlugosc(napis));
    wprintf(L"Napis: %ls\nDlugosc: %d\n",napis_w,dlugosc2(napis_w));
    return 0;
}
