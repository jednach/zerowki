#include <stdio.h>
#include <stdlib.h>

struct Budynek{
    char* adres;
    int numer;
};
int dl(char*nap)
{
    int i=0;
    while(nap[i]!=0)
        i++;
    return i;
}
int foo(struct Budynek tab[], int n)
{
    int indeks=0;
    for(int i=1;i<n;i++)
        if(dl(tab[i].adres)<dl(tab[indeks].adres))
            indeks=i;
    int res=tab[indeks].numer;
    return res;
}

int main()
{
    struct Budynek tab[5];
    tab[0].adres="chuj12";
    tab[0].numer=1;
    tab[1].adres="c";
    tab[1].numer=2;
    tab[2].adres="ch";
    tab[2].numer=3;
    tab[3].adres="chuj124";
    tab[3].numer=4;
    tab[4].adres="chuj";
    tab[4].numer=5;
    printf("%d",foo(tab,5));
    return 0;
}
