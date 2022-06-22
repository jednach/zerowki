#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*m);
    return tab;
}
int foo1(int**tab,int n,int m)
{
    int maks=*(*(tab+0)+0), mini=*(*(tab+0)+0);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(mini>*(*(tab+i)+j))
                mini=*(*(tab+i)+j);
            if(maks<*(*(tab+i)+j))
                maks=*(*(tab+i)+j);
        }
    return maks-mini;
}
int main()
{
    int**tab=foo(2,3);
    tab = foo(2,3);
    *(*(tab+0)+0) = 0;
    *(*(tab+0)+1) = 5;
    *(*(tab+0)+2) = 1;
    *(*(tab+1)+0) = 9;
    *(*(tab+1)+1) = 2;
    *(*(tab+1)+2) = 3;
    printf("%d",foo1(tab,2,3));
    return 0;
}
