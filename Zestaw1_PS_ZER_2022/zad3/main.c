#include <stdio.h>
#include <stdlib.h>

struct Film{
    char* napis;
    double ocena;
};
double foo(struct Film tab[], int n)
{
    double maks;
    maks=tab[0].ocena;
    for(int i=1;i<n;i++)
        if(tab[i].ocena>maks)
            maks=tab[i].ocena;
    return maks;
}
int main()
{
    struct Film a;
    a.napis="chuj1";
    a.ocena=0.5;
    struct Film b;
    b.napis="chuj2";
    b.ocena=0;
    struct Film c;
    c.napis="chuj3";
    c.ocena=-1;
    struct Film tab[]={a,b,c};
    printf("%lf",foo(tab,3));
    return 0;
}
