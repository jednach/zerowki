#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};
void foo(struct element* Lista)
{
    int res=0;
    while(Lista!=NULL)
    {
        if(Lista->x%2!=0)
            res=Lista->x;
        Lista=Lista->next;
    }
    if(res!=0)
        printf("ostatni element nieparzysty to: %d\n",res);
    else
        printf("brak elementow nieparzystych\n");
}
int main()
{
    struct element* l1 = malloc(sizeof(struct element));
    l1->x=3;
    l1->next=malloc(sizeof(struct element));
    l1->next->x=-1;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->x=2;
    l1->next->next->next=NULL;
    foo(l1);
    struct element* l2 = NULL;
    foo(l2);
    return 0;
}
