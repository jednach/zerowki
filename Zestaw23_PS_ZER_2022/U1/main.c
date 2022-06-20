#include <stdio.h>
#include <stdlib.h>

struct Student{
    char* imie;
    int indeks;
    float srednia;
};

float foo(struct Student tab[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if (tab[temp].indeks> tab[i].indeks)
        {
            temp=i;
        }
    }
    return tab[temp].srednia;
}

int main()
{
    struct Student tab[3];
    tab[0].imie="chuj1";
    tab[0].indeks=10;
    tab[0].srednia=4.9;
    tab[1].imie="chuj2";
    tab[1].indeks=2;
    tab[1].srednia=2.9;
    tab[2].imie="chuj3";
    tab[2].indeks=3;
    tab[2].srednia=3.2;
    printf("%f",foo(tab,3));
    return 0;
}
