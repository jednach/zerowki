#include <stdio.h>
#include <stdlib.h>

struct element{
    float x;
    struct element * next;
};

void foo(struct element * Lista)
{
    if(Lista==NULL)
        printf("%p",NULL);
    else
    {
        printf("%p\n",Lista);
        while(Lista->next!=NULL)
        {
            Lista=Lista->next;
        }
        printf("%p\n",Lista);
    }
}
int main()
{
    struct element * l1=malloc(sizeof(struct element));
    l1->x=5.5;
    l1->next=malloc(sizeof(struct element));
    l1->next->x =-4;
    l1->next->next=malloc(sizeof(struct element));
    l1->next->next->x=3;
    l1->next->next->next=NULL;
    printf("%p\n",l1);
    printf("%p\n",l1->next->next);
    foo(l1);
    struct element * l2=NULL;
    foo(l2);
    return 0;
}
