#include <stdio.h>
#include <stdlib.h>

//Z poprzednich zajec

float foo(){
    static float ciag = 0.2;
    static int licznik = 0;
    if(licznik == 0){
        licznik++;
        return ciag;
    }
    ciag = 1-ciag*ciag;
    return ciag;
}

int main()
{
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    printf("%f\n",foo());
    return 0;
}
