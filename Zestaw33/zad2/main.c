#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    int res=0;
    for(int i=0;i<n;i++)
        if(i%5==0 && i%7==0)
            res+=i;
    return res;
}
int main()
{
    printf("%d",foo(36));
    return 0;
}
