#include <stdio.h>
#include <stdlib.h>

int main()
{
  char napis[20]="WERTEDSHVDD";
  char z = *(napis+2); //z=
  int a = napis[13]; // a=   ,z=
  z++; // a=   ,z=
  int b= a--; // a=   , b=  ,z=
  z=(a-=2)+3; // a=   , b=  ,z=
  a=a-4; // a=   , b=  ,z=
  b=a*b; // a=   , b=  ,z=
  return 0;
}

