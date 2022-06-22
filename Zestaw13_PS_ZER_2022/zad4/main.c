#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};
struct element * foo(struct element * Lista)
{
    Lista=Lista->next;
    struct element * res=Lista;
    if(Lista==NULL)
        return NULL;
    int mini=Lista->x;
    while(Lista!=NULL)
    {
        if(mini>Lista->x)
        {
            mini=Lista->x;
            res=Lista;
        }
        Lista=Lista->next;
    }
    return res;
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
    printf("%p\n",foo(l1));
    printf("%p\n",l1->next->next);
    struct element * l2=malloc(sizeof(struct element));
    l2->next=NULL;
    printf("%p",foo(l2));
    return 0;
}
