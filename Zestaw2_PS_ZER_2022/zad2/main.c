#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int tab[n])
{
    int spr=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(tab[i]==tab[j])
                spr++;
        }
        if(spr==0)
            printf("%d\n",tab[i]);
        else
            spr=0;
    }
}
int main()
{
    int tab[]={0,1,2,3,4,5,6,7,8,9};
    foo(10,tab);
    return 0;
}
