#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ** foo(int,int);
void foofree(int **,int,int);
void fooseto(int [][100],int);
void foosetoo(int**,int,int);
int foosum(int [][100],int);
int foosumtt(int**,int,int);
int foomaxavgindex(int**,int,int);
double foomaxavgvalue(int**,int,int);
void fooprint(int**,int,int);
void foogive(int**,int**,int,int);
void foochange(int**,int**,int,int);
void fooinvert(int**,int,int);
void foochangew(int**,int,int);
void foochangek(int**,int,int);
void footrans(int**,int);
int ** foocreattrans(int**,int,int);
int ** foocreatsum(int**,int**,int);

int main()
{
    int **tab;
    tab = foo(2,3);
    *(*(tab+0)+0) = -4;
    *(*(tab+0)+1) = 5;
    *(*(tab+0)+2) = 1;
    *(*(tab+1)+0) = 9;
    *(*(tab+1)+1) = 2;
    *(*(tab+1)+2) = 3;
    fooprint(tab,2,3);
    printf("%d\n", foosumtt(tab,2,3));
    printf("wiersz z najwieksza srednia wartosci to: %d, wynosi: %lf\n", foomaxavgindex(tab,2,3), foomaxavgvalue(tab,2,3));
    //foosetoo(tab,2,3);
    fooprint(tab,2,3);
    printf("====================\n");
    int tab1[2][100];
    for(int i=0;i<2;i++)
    {
        {
            for(int j=0;j<100;j++)
            {
                tab1[i][j] = 1;
                printf("%d ", *(*(tab1+i)+j));
            }
        }
        printf("\n");
    }
    fooseto(tab1,2);
    for(int i=0;i<2;i++)
    {
        {
            for(int j=0;j<100;j++)
                printf("%d ", *(*(tab1+i)+j));
        }
        printf("\n");
    }
    tab1[0][0] = 322;
    tab1[1][3] = 2;
    printf("%d\n",foosum(tab1,2));
    printf("================\n");

    int **tab2;
    tab2 = foo(2,3);
    foogive(tab,tab2,2,3);
    fooprint(tab2,2,3);
    printf("================\n");
    *(*(tab2+0)+0) = 1;
    *(*(tab2+0)+1) = 2;
    *(*(tab2+0)+2) = 3;
    *(*(tab2+1)+0) = 4;
    *(*(tab2+1)+1) = 5;
    *(*(tab2+1)+2) = 6;
    foochange(tab,tab2,2,3);
    fooprint(tab,2,3);
    printf("===\n");
    fooprint(tab2,2,3);
    printf("================\n");
    fooinvert(tab,2,3);
    fooprint(tab,2,3);
    printf("================\n");

    srand(time(NULL));
    int **tab3;
    tab3=foo(4,4);
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            *(*(tab3+i)+j)=rand()%5;
    fooprint(tab3,4,4);
    printf("================\n");
    foochangew(tab3,4,4);
    fooprint(tab3,4,4);
    printf("================\n");
    foochangek(tab3,4,4);
    fooprint(tab3,4,4);
    printf("================\n");
    footrans(tab3,4);
    fooprint(tab3,4,4);
    printf("================\n");
    printf("tablica tab4\n");
    int **tab4;
    tab4=foo(3,4);
    for(int i=0;i<3;i++)
        for(int j=0;j<4;j++)
            *(*(tab4+i)+j)=rand()%5;
    fooprint(tab4,3,4);
    printf("\n");
    fooprint(foocreattrans(tab4,3,4),4,3);

    printf("================\n");
    printf("tablice tab5 tab6\n");
    int **tab5, **tab6;
    tab5=foo(5,5);
    tab6=foo(5,5);
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        {
            *(*(tab5+i)+j)=rand()%5;
            *(*(tab6+i)+j)=rand()%5;
        }
    fooprint(tab5,5,5);
    printf("\n");
    fooprint(tab6,5,5);
    printf("suma tab5 tab6:\n");
    fooprint(foocreatsum(tab5,tab6,5),5,5);

    foofree(tab,2,3);
    foofree(tab2,2,3);
    foofree(tab3,4,4);
    foofree(tab4,3,4);
    foofree(tab5,5,5);
    foofree(tab6,5,5);
    return 0;
}
int ** foo(int n, int m)
{
    int **tab = (int**) malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
        tab[i] = (int*) malloc(sizeof(int)*m);
    return tab;
}
void foofree(int **tab, int n , int m)
{
    for(int i=0;i<n;i++)
        free(tab[i]);
    free(tab);
}
void fooseto(int tab[][100], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<100;j++)
            tab[i][j]=0;
}
void foosetoo(int **tab,int n,int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            *(*(tab+i)+j) = 0;
}
int foosum(int tab[][100], int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<100;j++)
            suma+=tab[i][j];
    return suma;
}
int foosumtt(int **tab,int n,int m)
{
    int suma=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            suma+=*(*(tab+i)+j);
    return suma;
}
int foomaxavgindex(int **tab, int n, int m)
{
    int suma=0, wiersz=0;
    double maks;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            suma+=*(*(tab+i)+j);
        if((double)suma/m>maks || i==0)
        {
            maks=(double)suma/m;
            wiersz=i;
        }
        suma=0;
    }
    return wiersz;
}
double foomaxavgvalue(int **tab, int n, int m)
{
    int suma=0;
    double maks;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            suma+=*(*(tab+i)+j);
        if((double)suma/m>maks || i==0)
            maks=(double)suma/m;
        suma=0;
    }
    return maks;
}
void fooprint(int **tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%d ", *(*(tab+i)+j));
        printf("\n");
    }
}
void foogive(int **tab1,int **tab2, int n, int m)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            *(*(tab2+i)+j)=*(*(tab1+i)+j);
}
void foochange(int **tab1,int **tab2, int n, int m)
{
    int tmp;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            tmp=*(*(tab1+i)+j);
            *(*(tab1+i)+j)=*(*(tab2+i)+j);
            *(*(tab2+i)+j)=tmp;
        }
}
void fooinvert(int **tab, int n , int m)
{
    int tmp;
    for(int i=0;i<n;i++)
        for(int j=0, k=m-1;j<k;j++, k--)
        {
            tmp=*(*(tab+i)+j);
            *(*(tab+i)+j)=*(*(tab+i)+k);
            *(*(tab+i)+k)=tmp;
        }
}
void foochangew(int **tab, int n, int m)
{
    int tmp;
    for(int i=0;i<m;i++)
    {
        tmp=*(*(tab+n-1)+i);
        for(int j=n-1;j>0;j--)
            *(*(tab+j)+i)=*(*(tab+j-1)+i);
        *(*(tab+0)+i)=tmp;
    }
}
void foochangek(int **tab, int n, int m)
{
    int tmp;
    for(int i=0;i<n;i++)
    {
        tmp=*(*(tab+i)+m-1);
        for(int j=m-1;j>0;j--)
            *(*(tab+i)+j)=*(*(tab+i)+j-1);
        *(*(tab+i)+0)=tmp;
    }
}
void footrans(int **tab, int n)
{
    int **tab1;
    tab1=foo(n,n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            *(*(tab1+i)+j)=*(*(tab+j)+i);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            *(*(tab+i)+j)=*(*(tab1+i)+j);
    foofree(tab1,n,n);
}
int ** foocreattrans(int **tab, int n, int m)
{
    int **tab1;
    tab1=foo(m,n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            *(*(tab1+i)+j)=*(*(tab+j)+i);
    return tab1;
}
int ** foocreatsum(int **tab1, int **tab2, int n)
{
    int **tab3;
    tab3=foo(n,n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            *(*(tab3+i)+j)=*(*(tab1+i)+j)+*(*(tab2+i)+j);
    return tab3;
}









