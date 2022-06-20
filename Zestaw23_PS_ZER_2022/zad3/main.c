#include <stdio.h>
#include <stdlib.h>

int ** foo(int n)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*n);
    return tab;
}
int foo1(int**tab, int n)
{
    int res=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            if(*(*(tab+i)+j)%2!=0)
                res+=*(*(tab+i)+j);
        }
    if(res==0)
        return -1;
    return res;
}
int main()
{
    int **tab;
    tab=foo(3);
    *(*(tab+0)+0) = 2;
    *(*(tab+0)+1) = 2;
    *(*(tab+0)+2) = 2;
    *(*(tab+1)+0) = 2;
    *(*(tab+1)+1) = 2;
    *(*(tab+1)+2) = 2;
    *(*(tab+2)+0) = 0;
    *(*(tab+2)+1) = 2;
    *(*(tab+2)+2) = 2;
    printf("%d",foo1(tab,3));
    return 0;
}
