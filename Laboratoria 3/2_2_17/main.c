#include <stdio.h>
#include <stdlib.h>

int count = 0;

void zlicza(){
    count++;
    printf("Wywolanie nr %d\n",count);
}

int main()
{
    zlicza();
    zlicza();
    zlicza();
    return 0;
}
