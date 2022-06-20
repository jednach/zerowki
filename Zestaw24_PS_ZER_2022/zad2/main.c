#include <stdio.h>
#include <stdlib.h>

int foo(int n,int tab[n])
{
    int res;
    for(int i=0;i<n;i++)
        if(i%2==0)
            res+=tab[i];
    return res;
}
int main()
{
    int tab[3]={0,2,3};
    printf("%d",foo(3,tab));
    return 0;
}
