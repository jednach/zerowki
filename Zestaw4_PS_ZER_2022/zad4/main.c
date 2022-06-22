#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};
void wyswietlListeBezGlowy(struct element*Lista)
{
    struct element*temp=Lista;
    while(temp!=NULL)
    {
        if(temp->i<0)
            printf("%d\n",temp->i);
        temp=temp->next;
    }
    printf("----\n");
}
int main()
{
    struct element* l1 = malloc(sizeof(struct element));
    l1->i=3;
    l1->next=malloc(sizeof(struct element));
    l1->next->i=-1;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->i=2;
    l1->next->next->next=NULL;
    wyswietlListeBezGlowy(l1);
    struct element* l2 = NULL;
    wyswietlListeBezGlowy(l2);
    return 0;
}
