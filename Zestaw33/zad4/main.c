#include <stdio.h>
#include <stdlib.h>

struct node{
    float x;
    struct node * next;
};
int foo(struct node * Lista)
{
    if(Lista==NULL)
        return 0;
    else
    {
        while(Lista!=NULL)
        {
            if(Lista->x<0)
                return 0;
            Lista=Lista->next;
        }
    }
    return 1;
}
int main()
{
    struct node * l1=malloc(sizeof(struct node));
    l1->x=5.5;
    l1->next=malloc(sizeof(struct node));
    l1->next->x =4;
    l1->next->next=malloc(sizeof(struct node));
    l1->next->next->x=3;
    l1->next->next->next=NULL;
    printf("%d\n",foo(l1));
    struct node * l2=NULL;
    printf("%d",foo(l2));
    return 0;
}
