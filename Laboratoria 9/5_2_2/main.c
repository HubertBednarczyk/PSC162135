#include <stdio.h>
#include <stdlib.h>

//Dla char:
size_t dlugosc(const char *napis){
    return strlen(napis);
}
//Dla wchar_t:
size_t dlugosc2(const wchar_t *napis){
    return wcslen(napis);
}

int main()
{
    const char *napis = "Hello, world!";
    const wchar_t *napis_w = L"Swiecie, witaj!";
    printf("Napis: %s\nDlugosc: %zu\n",napis,dlugosc(napis));
    wprintf(L"Napis: %ls\nDlugosc: %zu\n",napis_w,dlugosc(napis_w));
    return 0;
}
