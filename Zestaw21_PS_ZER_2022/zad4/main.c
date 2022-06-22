#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node * next;
};
void foo(struct node * Lista)
{
    Lista=Lista->next;
    while(Lista!=NULL)
    {
        if(Lista->a%2==0)
            printf("%d\n",Lista->a);
        Lista=Lista->next;
    }
    printf("-------\n");
}
int main()
{
    struct node * l1=malloc(sizeof(struct node));
    l1->next=malloc(sizeof(struct node));
    l1->next->a=-3;
    l1->next->next=malloc(sizeof(struct node));
    l1->next->next->a=1;
    l1->next->next->next=malloc(sizeof(struct node));
    l1->next->next->next->a=-4;
    l1->next->next->next->next=NULL;
    foo(l1);
    struct node * l2=malloc(sizeof(struct node));
    l2->next=NULL;
    foo(l2);
    return 0;
}
