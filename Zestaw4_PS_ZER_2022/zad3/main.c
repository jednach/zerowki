#include <stdio.h>
#include <stdlib.h>

struct Pracownik{
    char* imie;
    int nr;
    float wynagrodzenie;
};
int foo(struct Pracownik tab[], int n)
{
    int res=tab[0].nr;
    for(int i=1;i<n;i++)
        if(tab[i].nr>res)
            res=tab[i].nr;
    return res;
}
int main()
{
    struct Pracownik tab[3];
    tab[0].imie="chuj1";
    tab[0].nr=5;
    tab[0].wynagrodzenie=3333.3;
    tab[1].imie="chuj2";
    tab[1].nr=7;
    tab[1].wynagrodzenie=5000;
    tab[2].imie="chuj3";
    tab[2].nr=1;
    tab[2].wynagrodzenie=12345.67;
    printf("%d",foo(tab,3));
    return 0;
}
