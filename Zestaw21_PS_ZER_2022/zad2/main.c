#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            res+=i;
    }
    return res;
}
int main()
{
    printf("%d\n", foo(1));
    printf("%d\n", foo(5));
    printf("%d\n", foo(12));
    return 0;
}
