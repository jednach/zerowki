#include <stdio.h>
#include <stdlib.h>

struct element{
    float x;
    struct element * next;
};
struct element * utworz()
{
    return NULL;
};
struct element* dodaj(struct element*Lista, float a)
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->x=a;
    wsk->next=Lista;
    return wsk;
};
void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%f\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}
float foo(struct element*Lista)
{
    float res=0;
    int i=0;
    if(Lista==NULL)
        return res;
    else
    {
        while(Lista!=NULL)
        {
            res+=Lista->x;
            i++;
            Lista=Lista->next;
        }
    }
    return res/(float)i;
}
int main()
{
    struct element* l1 = utworz();
    l1 = dodaj(l1,2);
    l1 = dodaj(l1,3);
    l1 = dodaj(l1,4);
    l1 = dodaj(l1,5);
    l1 = dodaj(l1,6);
    wyswietlListeBezGlowy(l1);
    struct element* l2 = malloc(sizeof(struct element));
    l2->x=3.5;
    l2->next=malloc(sizeof(struct element));
    l2->next->x=4.2;
    l2->next->next=NULL;
    wyswietlListeBezGlowy(l2);
    struct element* l3 = utworz();
    printf("%f\n",foo(l3));
    printf("%f\n",foo(l2));
    printf("%f\n",foo(l1));

    return 0;
}
