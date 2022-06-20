#include <stdio.h>
#include <stdlib.h>

void foo(int n,int tab[n])
{
    for(int i=0;i<n;i++)
        if(tab[i]%2==0)
            tab[i]=0;
}
int main()
{
    int tab[4]={1,2,3,4};
    foo(4,tab);
    for(int i=0;i<4;i++)
        printf("%d\n",tab[i]);
    return 0;
}
