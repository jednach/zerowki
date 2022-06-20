#include <stdio.h>
#include <stdlib.h>

int foo(int tab1[], int tab2[], int n)
{
    int sum1=0, sum2=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]%2!=0)
            sum1+=tab1[i];
        if(tab2[i]%2!=0)
            sum2+=tab2[i];
    }
    if(sum1==sum2)
        return 1;
    return 0;
}
int main()
{
    int tab1[3]={1,2,3}, tab2[3]={0,1,2};
    int tab3[3]={1,2,3}, tab4[3]={0,1,3};
    printf("%d\n",foo(tab1,tab2,3));
    printf("%d",foo(tab3,tab4,3));
    return 0;
}
