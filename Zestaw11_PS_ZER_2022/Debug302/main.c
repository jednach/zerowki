#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {1,2,3,4,5,6,7,8,9};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=3
    int c = b+3; // b=3  , c=6
    int d = foo(&b,&c); // b=3  , c=6  , d=6
    int e = (wsk+=1)[2]; // b=3  , c=3  , d=6  , e=6
    b = (c += 8) + (e -= 3); // b=17  , c=14  , d=6  , e=3
    e = (d *= 8) + (c /= 3); // b=17  , c=4  , d=48  , e=52
    c = d - (b+=8); // b=25  , c=23  , d=48  , e=52
    b = *wsk + e; // b=56  , c=23  , d=48  , e=52
    return 0;
}
