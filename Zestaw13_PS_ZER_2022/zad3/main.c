#include <stdio.h>
#include <stdlib.h>

int ** foo(int n)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*n);
    return tab;
}
int foo2(int**tab,int n)
{
    int res=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(*(*(tab+i)+j)%2!=0)
                res*=*(*(tab+i)+j);
    return res;
}
int main()
{
    int **tab;
    tab=foo(2);
    *(*(tab+0)+0) = 0;
    *(*(tab+0)+1) = 2;
    *(*(tab+1)+0) = 2;
    *(*(tab+1)+1) = 4;
    printf("%d", foo2(tab,2));
    return 0;
}
