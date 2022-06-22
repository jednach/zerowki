#include <stdio.h>
#include <stdlib.h>

struct elem{
    int x;
    struct elem * next;
};
void wyswietlListeBezGlowy(struct elem*Lista)
{
    struct elem*temp=Lista;
    if(temp==NULL)
    {
        printf("Lista jest pusta\n");
    }
    while(temp!=NULL)
    {
        printf("%d\n",temp->x);
        temp=temp->next;
    }
    printf("----\n");
}
void foo(struct elem * Lista)
{
    while(Lista!=NULL)
    {
        Lista->x*=3;
        Lista=Lista->next;
    }
}
int main()
{
    struct elem* l1 = malloc(sizeof(struct elem));
    l1->x=3;
    l1->next=malloc(sizeof(struct elem));
    l1->next->x=-1;
    l1->next->next=malloc(sizeof(struct elem));
    l1->next->next->x=2;
    l1->next->next->next=NULL;
    foo(l1);
    wyswietlListeBezGlowy(l1);
    foo(l1);
    wyswietlListeBezGlowy(l1);
    struct elem* l2 = NULL;
    foo(l2);
    wyswietlListeBezGlowy(l2);
    return 0;
}
