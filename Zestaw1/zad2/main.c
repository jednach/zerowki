#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
        res+=i*i*i;
    return res;
}
int main()
{
    printf("%d\n",foo(2));
    printf("%d\n",foo(3));
    return 0;
}
