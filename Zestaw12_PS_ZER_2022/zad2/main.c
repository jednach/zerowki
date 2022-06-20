#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int m,int n,int tab1[m],int tab2[m])
{
    int res=0;
    for(int i=0;i<m;i++)
    {
        if(tab1[i]>n)
            res++;
        if(tab2[i]>n)
            res++;
    }
    return res;
}

int main()
{
    int tab1[3]={5,6,0}, tab2[3]={0,-1,6};
    printf("%d", foo(3,2,tab1,tab2));
    return 0;
}
