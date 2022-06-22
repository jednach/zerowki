#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};
int foo(struct element * Lista)
{
    struct element * temp=Lista->next;
    int res=0;
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        if(Lista->x>0)
        {
            res=Lista->x;
            break;
        }
        Lista=Lista->next;
    }
    while(temp!=NULL)
    {
        if((temp->x<res) && (temp->x>0))
            res=temp->x;
        temp=temp->next;
    }
    return res;
}
int main()
{
    struct element * l1=malloc(sizeof(struct element));
    l1->next=malloc(sizeof(struct element));
    l1->next->x=2;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->x=1;
    l1->next->next->next=malloc(sizeof(struct element));
    l1->next->next->next->x=2;
    l1->next->next->next->next=NULL;
    printf("%d\n",foo(l1));
    struct element * l2=malloc(sizeof(struct element));
    l2->next=NULL;
    printf("%d\n",foo(l2));
    return 0;
}
