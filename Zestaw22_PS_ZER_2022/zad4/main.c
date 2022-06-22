#include <stdio.h>
#include <stdlib.h>

struct node{
    int i;
    struct node * next;
};
int foo(struct node * Lista, int a)
{
    int res=0;
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        if(Lista->i==a)
            res++;
        Lista=Lista->next;
    }
    return res;
}
int main()
{
    struct node * l1=malloc(sizeof(struct node));
    l1->next=malloc(sizeof(struct node));
    l1->next->i=-3;
    l1->next->next=malloc(sizeof(struct node));
    l1->next->next->i=1;
    l1->next->next->next=malloc(sizeof(struct node));
    l1->next->next->next->i=1;
    l1->next->next->next->next=NULL;
    printf("%d\n",foo(l1,-3));
    struct node * l2=malloc(sizeof(struct node));
    l2->next=NULL;
    printf("%d\n",foo(l2,2));
    return 0;
}
