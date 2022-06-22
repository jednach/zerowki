#include <stdio.h>
#include <stdlib.h>

struct node{
    float x;
    struct node * next;
};
float foo(struct node * Lista)
{
    struct node * temp=Lista->next;
    if(temp==NULL)
        return 0;
    float res;
    res=temp->x;
    temp=temp->next;
    while(temp!=NULL)
    {
        if(res<temp->x)
            res=temp->x;
        temp=temp->next;
    }
    return res;
}
int main()
{
    struct node * l1=malloc(sizeof(struct node));
    l1->next=malloc(sizeof(struct node));
    l1->next->x=-3;
    l1->next->next=malloc(sizeof(struct node));
    l1->next->next->x=-2;
    l1->next->next->next=malloc(sizeof(struct node));
    l1->next->next->next->x=-4;
    l1->next->next->next->next=NULL;
    printf("%f\n",foo(l1));
    struct node * l2=malloc(sizeof(struct node));
    l2->next=NULL;
    printf("%f\n",foo(l2));
    return 0;
}
