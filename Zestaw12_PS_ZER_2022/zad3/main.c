#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*m);
    return tab;
}
int foo2(int**tab, unsigned int n, unsigned int m)
{
    int res=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(i==j)
                res += *(*(tab+i)+j) * *(*(tab+i)+j);
    return res;
}
int main()
{
    int**tab;
    tab=foo(2,2);
    *(*(tab+0)+0) = -4;
    *(*(tab+0)+1) = 5;
    *(*(tab+1)+0) = 9;
    *(*(tab+1)+1) = 2;
    printf("%d",foo2(tab,2,2));
    return 0;
}
