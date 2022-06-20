#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float foo(int n, float x)
{
    float res=1;
    res+=pow(-1,n)*pow(x,n)/n;
    return res;
}
int main()
{
    printf("%f",foo(3,2));
    return 0;
}
