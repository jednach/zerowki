#include <stdio.h>
#include <stdlib.h>

struct element{
    float x;
    struct element * next;
};
void foo(struct element * Lista)
{
    struct element * temp=Lista->next;
    Lista->next=malloc(sizeof(struct element));
    Lista->next->x=0;
    Lista->next->next=temp;
}
void show(struct element * Lista)
{
    Lista=Lista->next;
    if(Lista==NULL)
        printf("jest pusta\n");
    else
    {
        while(Lista!=NULL)
        {
            printf("%f\n",Lista->x);
            Lista=Lista->next;
        }
    }
    printf("---------\n");
}
int main()
{
    struct element * l1=malloc(sizeof(struct element));
    l1->next=malloc(sizeof(struct element));
    l1->next->x=5;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->x=-2;
    l1->next->next->next=malloc(sizeof(struct element));
    l1->next->next->next->x=9;
    l1->next->next->next->next=NULL;
    show(l1);
    foo(l1);
    show(l1);
    struct element * l2=malloc(sizeof(struct element));
    l2->next=NULL;
    show(l2);
    foo(l2);
    show(l2);
    return 0;
}
