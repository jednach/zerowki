#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[20]="XmNMYPrGytSxVe68";
    char z = *(napis+3)+2; //z=79 'O'
    int a = napis[4]; // a=89   ,z=79 'O'
    z++; // a=89   ,z=80 'P'
    int b= a--; // a=88   , b=89  ,z=80 'P'
    z=(a-=2)+4; // a=86   , b=89  ,z=90 'Z'
    a=a^2; // a=84   , b=89  ,z=90 'Z'
    b=a+++b; // a=85   , b=173  ,z=90 'Z'
    return 0;
}
