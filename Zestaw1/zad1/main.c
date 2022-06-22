#include <stdio.h>
#include <stdlib.h>

char * foo(char*napis1,char*napis2)
{
    return NULL;
}
int main()
{
    char*nap1="chuj1",*nap2="chuj2",*nap3;
    nap3=foo(nap1,nap2);
    printf("%s",nap3);
    return 0;
}
