#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis[30]="informatyka";
    char z = *(napis+2); //z=102 'f'
    int a = napis[3]; // a=111   ,z=102 'f'
    z++; // a=111   ,z=103 'g'
    int b= a--; // a=110   , b=111  ,z=103 'g'
    z=(a-=2)+3; // a=108   , b=111  ,z=111 'o'
    a=a^4; // a=104   , b=111  ,z=111 'o'
    b=a+++b; // a=105   , b=215  ,z=111 'o'
    return 0;
}
