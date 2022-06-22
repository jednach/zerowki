#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};
void wyswietlListeZGlowa(struct element*Lista)
{
    struct element * temp=Lista->next;
    while(temp!=NULL)
    {
        if(temp->i>0)
            printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}
int main()
{
    struct element * l1=malloc(sizeof(struct element));
    l1->next=malloc(sizeof(struct element));
    l1->next->i=5;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->i=-2;
    l1->next->next->next=malloc(sizeof(struct element));
    l1->next->next->next->i=9;
    l1->next->next->next->next=NULL;
    wyswietlListeZGlowa(l1);
    struct element * l2=malloc(sizeof(struct element));
    l2->next=NULL;
    wyswietlListeZGlowa(l2);
    return 0;
}
