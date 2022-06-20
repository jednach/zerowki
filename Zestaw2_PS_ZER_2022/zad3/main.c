#include <stdio.h>
#include <stdlib.h>

int foo(int n, int tab[][n])
{
    int suma=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if((j+1)%2==0)
                suma+=tab[i][j];
    return suma;
}
int main()
{
    int tab[][3]={{1,2,3},{0,0,0},{2,3,4}};
    printf("%d",foo(3,tab));
    return 0;
}
