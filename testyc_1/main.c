#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int *** footri(int,int,int);
void foofree(int***,int,int,int);
int foosumtri(int[3][3][3]);
int foosumtrin(int[][3][3], int);
int main()
{
    srand(time(NULL));
    int ***tab;
    tab=footri(3,3,3);
    for(int i=0;i<3;i++)
    {
        printf("pietro nr: %d\n", i+1);
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                tab[j][k][i]=rand()%5;
                printf("%d ", tab[j][k][i]);
            }
            printf("\n");
        }
        printf("\n");
    }
    free(tab);
    printf("=======================");
    int tab1[3][3][3];
    for(int i=0;i<3;i++)
    {
        printf("pietro nr: %d\n", i+1);
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                tab1[j][k][i]=rand()%5;
                printf("%d ", tab1[j][k][i]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("%d\n", foosumtri(tab1));
    printf("%d\n", foosumtrin(tab1,2));
    return 0;
}
int *** footri(int n, int m, int l)
{
    int ***tab = (int***) malloc(sizeof(int**)*n);
    for(int i=0;i<n;i++)
    {
        tab[i] = (int**) malloc(sizeof(int*)*m);
        for(int j=0;j<m;j++)
            tab[i][j] = (int*) malloc(sizeof(int)*l);
    }
    return tab;
}
void foofree(int ***tab, int n , int m, int l)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            free(tab[i][j]);
        free(tab[i]);
    }
    free(tab);
}
int foosumtri(int tab[3][3][3])
{
    int suma=0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                suma+=tab[j][k][i];
    return suma;
}
int foosumtrin(int tab[][3][3], int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                suma+=tab[j][k][i];
    return suma;
}






