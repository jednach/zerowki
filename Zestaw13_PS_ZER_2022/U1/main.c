#include <stdio.h>
#include <stdlib.h>

struct Student{
    char* imie;
    int indeks;
};

int foo(struct Student tab[],int n)
{
    int temp=tab[0].indeks;
    for(int i=0;i<n;i++)
    {
        if (temp> tab[i].indeks)
        {
            temp=tab[i].indeks;
        }
    }
    return temp;
}

int main()
{
    struct Student tab[2];
    tab[0].imie="chuj1";
    tab[0].indeks=2;
    tab[1].imie="chuj1";
    tab[1].indeks=1;
    printf("%d", foo(tab,2));

    return 0;
}
