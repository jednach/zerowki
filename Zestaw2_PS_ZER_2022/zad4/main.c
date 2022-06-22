#include <stdio.h>
#include <stdlib.h>

struct node{
    float x;
    struct node * next;
};
void wyswietlListeBezGlowy(struct node*Lista)
{
    struct node*temp=Lista;
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
int foo(struct node* l1, struct node* l2)
{
    int i=0, j=0;
    while(l1!=NULL)
    {
        if(l1->x>0)
            i++;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        if(l2->x>0)
            j++;
        l2=l2->next;
    }
    if(i==j)
        return 1;
    return 0;
}
int main()
{
    struct node* l1 = malloc(sizeof(struct node));
    l1->x=3;
    l1->next=malloc(sizeof(struct node));
    l1->next->x=-1;
    l1->next->next=malloc(sizeof(struct node));
    l1->next->next->x=2;
    l1->next->next->next=NULL;
    wyswietlListeBezGlowy(l1);
    struct node* l2=malloc(sizeof(struct node));
    l2->x=3;
    l2->next=malloc(sizeof(struct node));
    l2->next->x=-1;
    l2->next->next=malloc(sizeof(struct node));
    l2->next->next->x=-2;
    l2->next->next->next=NULL;
    wyswietlListeBezGlowy(l2);
    printf("%d\n",foo(l1,l2));
    struct node* l3=malloc(sizeof(struct node));
    l3->x=2;
    l3->next=NULL;
    struct node* l4=NULL;
    struct node* l5=NULL;
    printf("%d\n",foo(l3,l4));
    printf("%d\n",foo(l4,l5));
    return 0;
}
