#include <stdio.h>
#include <stdlib.h>

int foo(const char *napis1, const char *napis2){
    int wynik = strcmp(napis1,napis2);
    if(wynik < 0){
        return 1;
    }
    return 0;
}

int main()
{
    const char *napis2 = "def";
    const char *napis1 = "abc";
    int wynik = foo(napis1,napis2);
    if(wynik){
        printf("%s jest wczesniejszy niz %s\n",napis1,napis2);
    }
    else{
        printf("%s jest pozniejszy lub rowny %s\n",napis1,napis2);
    }
    return 0;
}
