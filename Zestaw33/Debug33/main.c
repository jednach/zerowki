#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][4] = {{1,-2,30,-4},{4,2,2,7},{3,1,3,3}};
    int a=tab[1][-3]; //a=-2
    int b=tab[2][-2]; //a=-2  ,b=2
    a=b++; //a=2  ,b=3
    b=a^2;  //a=2  ,b=0
    a=(b+=3)+7;  //a=10  ,b=3
    b=**((tab)+2); //a=10  ,b=3
    ++a; //a=11  ,b=3
    return 0;
}
