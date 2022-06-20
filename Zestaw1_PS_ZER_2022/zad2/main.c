#include <stdio.h>
#include <stdlib.h>

int foo(char* nap)
{
    int j=0, i=0;
    while(nap[i]!=0)
    {
        if(nap[i]>='0' && nap[i]<='9')
            j++;
        i++;
    }
    return i+j;
}

int main()
{
    char *a="jdET";
    printf("%d\n", foo(a));
    char *b="abc3334";
    printf("%d\n", foo(b));
    char *c="12";
    printf("%d\n", foo(c));
    char *d="wtgh";
    printf("%d\n", foo(d));
    return 0;
}
