#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f",&x);
    if(x >= 0){
        printf("%f", sqrt(x));
    }
    else{
        printf("Liczba jest ujemna. Podaj dodatnia liczba badz 0.");
    }
    return 0;
}
