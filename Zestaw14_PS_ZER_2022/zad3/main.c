#include <stdio.h>
#include <stdlib.h>

struct Film{
    char* tytul;
    double ocena;
};
int foo(struct Film tab[], int n)
{
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(tab[res].ocena>tab[i].ocena)
            res=i;
    }
    return res;
}
int main()
{
    struct Film tab[4];
    tab[0].tytul="chuj1";
    tab[0].ocena=0;
    tab[1].tytul="chuj2";
    tab[1].ocena=5.7;
    tab[2].tytul="chuj3";
    tab[2].ocena=0.9;
    tab[3].tytul="chuj4";
    tab[3].ocena=8.1;
    printf("%d",foo(tab,4));
    return 0;
}
