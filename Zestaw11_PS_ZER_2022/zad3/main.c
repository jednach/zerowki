#include <stdio.h>
#include <stdlib.h>
enum Game {tilt0,tilt1,tilt2,tilt3,tilt4,tilt5,tiltwchuj};
int main()
{
    enum Game tab[4]={tilt2,tiltwchuj,tilt3,tilt5};
    for(int i=0;i<4;i++)
        printf("%d\n",tab[i]);

    return 0;
}
