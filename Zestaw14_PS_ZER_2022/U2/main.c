#include <stdio.h>
#include <stdlib.h>

struct Student{
    char imie[5];
    int indeks;
};

int foo(struct Student tab[],int n)
{
    int temp=tab[0].indeks;
    for(int i=0;i<n;i++)
    {
        if (temp< tab[i].indeks)
        {
            temp=tab[i].indeks;
        }
    }
    return temp;
}

int main()
{
    struct Student tab[2];
    tab[0].imie[0]='i';
    tab[0].imie[1]='m';
    tab[0].imie[2]='1';
    tab[0].imie[3]=0;
    tab[0].indeks=12;
    tab[1].imie[0]='i';
    tab[1].imie[1]='m';
    tab[1].imie[2]='1';
    tab[1].imie[3]='2';
    tab[1].imie[4]=0;
    tab[1].indeks=4;
    printf("%d",foo(tab,2));
    return 0;
}
