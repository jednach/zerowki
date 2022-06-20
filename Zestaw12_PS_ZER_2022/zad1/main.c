#include <stdio.h>
#include <stdlib.h>
float fun(int**n,char*m,float tab[])
{
    return 1;
}
int ** foo(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*m);
    return tab;
}
int main()
{
    int**tab;
    tab=foo(2,3);
    *(*(tab+0)+0) = -4;
    *(*(tab+0)+1) = 5;
    *(*(tab+0)+2) = 1;
    *(*(tab+1)+0) = 9;
    *(*(tab+1)+1) = 2;
    *(*(tab+1)+2) = 3;
    float tab1[2]={0,1};
    char*nap="chuj";
    printf("%lf",fun(tab,nap,tab1));
    return 0;
}
