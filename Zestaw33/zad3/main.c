#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Osoba{
    char imie[20];
    int wiek;
    float wzrost;
};
char * foo(struct Osoba tab[], int n)
{
    int indeks=0;
    for(int i=0;i<n;i++)
        if(tab[i].wiek>tab[indeks].wiek)
            indeks=i;
    return tab[indeks].imie;
}
int main()
{
    struct Osoba tab[3];
    strcpy(tab[0].imie,"chuj1");
    tab[0].wiek=12;
    tab[0].wzrost=1.5;
    strcpy(tab[1].imie,"chuj2");
    tab[1].wiek=13;
    tab[1].wzrost=1.6;
    strcpy(tab[2].imie,"chuj3");
    tab[2].wiek=14;
    tab[2].wzrost=1.7;
    char * res=foo(tab,3);
    printf("%s",res);
    return 0;
}
