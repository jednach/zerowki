#include <stdio.h>
#include <stdlib.h>

struct Pracownik{
    char* imie;
    int wynagrodzenie;
};

int foo(struct Pracownik tab[],int n)
{
    int temp=tab[0].wynagrodzenie;
    for(int i=0;i<n;i++)
    {
        if (temp> tab[i].wynagrodzenie)
        {
            temp=tab[i].wynagrodzenie;
        }
    }
    return temp;
}

int main()
{
    struct Pracownik tab[3];
    tab[0].imie="chuj1";
    tab[0].wynagrodzenie = 1500;
    tab[1].imie="chuj2";
    tab[1].wynagrodzenie = 500;
    tab[2].imie="chuj3";
    tab[2].wynagrodzenie = 5000;
    printf("%d",foo(tab,3));

    return 0;
}
