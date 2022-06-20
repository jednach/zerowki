#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*m);
    return tab;
}
int foo2(int**tab1,int**tab2,int n,int m)
{
    int res;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(*(*(tab1+i)+j)==*(*(tab2+i)+j))
                res++;
        }
    return res;
}
int main()
{
    int ** tab1, **tab2;
    tab1=foo(2,3);
    tab2=foo(2,3);
    *(*(tab1+0)+0) = -4;
    *(*(tab1+0)+1) = 5;
    *(*(tab1+0)+2) = 1;
    *(*(tab1+1)+0) = 9;
    *(*(tab1+1)+1) = 2;
    *(*(tab1+1)+2) = 3;
    *(*(tab2+0)+0) = 4;
    *(*(tab2+0)+1) = 5;
    *(*(tab2+0)+2) = 1;
    *(*(tab2+1)+0) = 9;
    *(*(tab2+1)+1) = 2;
    *(*(tab2+1)+2) = 1;
    printf("%d",foo2(tab1,tab2,2,3));
    return 0;
}
